
              // Author-Romit Choudhary(NIT Srinagar)
              // Go hard or Go home 
              // AIM 6* at CC and CM at CF *__* 
               
              #include <algorithm>
              #include <bits/stdc++.h>
              #include <unordered_map>
              #include <unordered_set>
              using namespace std;
              #define mod (int)(1e9 + 7)
              #define for0(i, n) for (int i = 0; i < n; ++i)
              #define for1(i, n) for (int i = 1; i <= n; ++i)
              #define loop(i,a,b) for (int i = a; i < b; ++i)
              #define bloop(i,a,b) for (int i = a ; i>=b;i--)
              #define tc(t) int t; cin >> t; while (t--)
              #define ll long long int 
               
              #define pb emplace_back
              #define fio  ios_base::sync_with_stdio(false), cin.tie(NULL)
              #define in(x) scanf("%intd", &x)
              #define rr return 0
              #define prec(n) fixed<<setprecision(n)
              #define maxheap priority_queue<int>
              #define minheap priority_queue<int, vector<int>, greater<int> >
              #define inf (int)(1e18)
              #define ini(a, i) memset(a, i, sizeof(a))
              #define fi first
              #define ull unsigned long long int 
              #define se second
              #define endl "\n"
             // #define int              long long int
              #define MOD 1000000007
              #define pi pair<int, int>
              const int MAXN = (int)((1e5) + 10);
              int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
              int max(int a,int b){if(a>b) return a; else return b;}
              int min(int a,int b){if(a<b) return a; else return b;}  
              bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
              int cbrt(int x){ int lo=1,hi=min(2000000ll,x);while(hi-lo>1){int mid=(lo+hi)/2;if(mid*mid*mid<x){lo=mid;}else hi=mid;}if(hi*hi*hi<=x) return hi;else return lo;} 
  

          
 

      

int n;
const int N = (int)5e5 + 5;
int NumInverse[N + 1];
int NumInversena[N + 1];
int numfact[N + 1];


void Numberinverse(int p) {
 NumInverse[0] =NumInverse[1] = 1;
 for (int i = 2; i <= N; i++)
  NumInversena[i] =NumInversena[p % i] * (p - p / i) % p;
}



void Factorialinverse(int p) {
 NumInverse[0] = NumInverse[1] = 1;
 for (int i = 2; i <= N; i++)
  NumInverse[i] = (NumInversena[i] * NumInverse[i - 1]) % p;
}
void addfactorial(int p) {
 numfact[0] = 1;
 for (int i = 1; i <= N; i++) {
  numfact[i] = (numfact[i - 1] * i) % p;
 }
}
void primeFactors(int n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        cout << n << " ";  
}  
int XDRBinomial(int N, int R, int p) {
    if(R>N) return 0;
    if(R==N) return 1;
 int ans = ((numfact[N] * NumInverse[R]) % p * NumInverse[N - R]) % p;
 return ans;
}
vector<vector<int>> adj;
vector<int> visa;
vector<int> nofways;
vector<int> sub_treeee;
int depthfsearch(int node) {
    visa[node] = 1;
    int ans=1, subtree=0;
    for(auto x: adj[node]) {
        if(visa[x] == 0) {
            int curr_s = depthfsearch(x);
            subtree += curr_s;
            ans*= XDRBinomial(subtree, curr_s, MOD);
            ans%=MOD;
            ans*=nofways[x];
            ans%=MOD;
        }
    }
    ans%=MOD;
    nofways[node] = ans;
    return subtree+1;
}
vector<pair<int, pair<int, int>>> AA;
int getNode(int node) {
    visa[node] = 1;
    int subtree=0, curr;
    for(auto x: adj[node]) {
        if(visa[x] == 0) {
            curr = getNode(x);
            subtree += curr;
    int abcd = min(curr,(n-curr));
            AA.push_back({abcd, {x, node}});
        }
    }
    sub_treeee[node] = subtree+1;
    return subtree+1;
}
 
// This function multiplies x with the number 
// represented by res[].
// res_size is size of res[] or number of digits in the 
// number represented by res[]. This function uses simple 
// school mathematics for multiplication.
// This function may value of res_size and returns the 
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[]  
        res[i] = prod % 10;  
 
        // Put rest in carry
        carry  = prod/10;    
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

            void solve()
             {
              int n;
              cin>>n;
              long long int a[n];
              int odd=0,even=0;

              for0(i,n){
                cin>>a[i];
                if(a[i]%2==0){
                  even++;
                }else{
                  odd++;
                }
              }
              sort(a,a+n);
              int cnt=0;
              if(n==1 || a[0]==a[n-1]){
               cnt=0;
              }else{
               long long  int max=a[n-1],max2=0;
                for(int i=n-2;i>=0;i--){
                  if(a[i]!=max){
                    max2=a[i];
                    break;
                  }
              }
               if(max%2==0){
                if(even>=odd){
                  cnt+=odd;
                }else{
                  cnt++;
                  even--;
                  cnt+=even;


                }
               

               }else{
                if(odd>=even){
                  cnt+=even;
                }else{
                  cnt++;
                  cnt+=odd-1;
                }
               }
             }
             cout<<cnt<<'\n';
        

              }
            

   



              signed main(){
              fio;
              #ifndef ONLINE_JUDGE 
              freopen("input.txt", "r", stdin); 
              
              freopen("output.txt", "w", stdout); 
                
          
          #endif 
              
               
              long long int t=1;
              

            
          


              cin>>t;

   
              
              while(t--){

               solve();
               }
              rr;
              }    
