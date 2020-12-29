class Solution {
public:
    int getMaximumGenerated(int n) {
        
        int a[n+1];
        a[0]=0;
        if(n>=1){
        a[1]=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                a[i]=a[i/2];
            }else{
                a[i]=a[(i-1)/2]+a[(i+1)/2];
            }
        }
        sort(a,a+n+1);
        }
        if(n==0){
            return 0;
        }else{
        return a[n];
        }
    }
};
