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
  
 
             /*bool isPerfectSquare(long double x)
            {
           // Find floating point value of
           // square root of x.
          if (x >= 0) {
 
          long long sr = sqrt(x);
         
          // if product of square root
          //is equal, then
          // return T/F
          return (sr * sr == x);
          }
          // else return false if n<0
          return false;
          }*/
              int ap(int a,int d,int x){
                int n=(x-a)/d+1;
                if((x-a)%d!=0){
                  n++;
                }
                return n;
              }
              int ap1(int a,int d,int x){
                int n=(x-a)/d+1;
               
                return n;
              }
 
 
 
 
          void solve()
          {
              
       long long     int d,D,p,q;
           cin>>D>>d>>p>>q;
           long long int cnt=0;
           if(D%d==0){
              
          long long     int x=D/d;
              x--;
              
             long long  int r=x*(x+1)/2;
              cnt+=x*(p)+(r*(q));
              cnt*=d;
              cnt+=p*d;
          
           }else{
         long long       int x=D/d;
              x--;
            
           long long    int r=x*(x+1)/2;
              cnt+=x*(p)+r*(q);
              cnt*=d;
              cnt+=p*d;
           long long    int z=D%d;
              x++;
              cnt+=z*(p+(x*q));
            
              
              
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
