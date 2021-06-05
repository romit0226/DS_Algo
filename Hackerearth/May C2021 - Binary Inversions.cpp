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
  
 
          
 
 
      
 
 
    
    
 
            void solve()
             {
               long int n;
               cin>>n;
               long int a;
               cin>>a;
               unsigned long  int x;
               cin>>x;
               if(a==0)
               {
                   if(x!=0){
                       cout<<-1;
                   }else{
                       cout<<0<<" ";
                std::vector<int> v(n,1);
                for0(i,v.size()){
                  cout<<v[i]<<" ";
                }
                   }
               }else{
                std::vector<int> v(a,0);
                for0(i,n-a){
                  v.push_back(1);
                }
                //int cnt=0;
                //int lasto=a-1;
                int first1=a;
                //int f=a-1;
                if(x>a*(n-a)){
                    cout<<-1;
                }else{
                int z=x/(n-a);
                int f=x%(n-a);
                int cnt=0;
               int  lasto=a-1;
                int last1=n-1;
                while(cnt!=z){
                  swap(v[last1],v[lasto]);
                  lasto--;
                  last1--;
                  cnt++;
                 // cout<<'romit';
                }
                int cnt1=0;
                int first1=0;
                for0(i,v.size()){
                    if(v[i]==1){
                        first1=i;
                        break;
                    }
                }
                 lasto=first1-1;
                
                while(cnt1!=f){
                    swap(v[lasto],v[first1]);
                    cnt1++;
                    first1++;
                    lasto++;
                }
                if(x==a*(n-a) & a!=0){
                    cout<<0<<" ";
                }
               
                for0(i,v.size()){
                  cout<<v[i]<<" ";
                }
 
 
 
 
 
 
 
                 
                }
               }
 
             
 
 
 
 
 
              }
 
               
 
 
              signed main(){
              fio;
              #ifndef ONLINE_JUDGE 
              freopen("input.txt", "r", stdin); 
              
              freopen("output.txt", "w", stdout); 
                
          
          #endif 
              
               
              long long int t=1;
              
 
            
          
 
 
              //cin>>t;
 
   
              
              while(t--){
 
               solve();
               }
              rr;
              }    
