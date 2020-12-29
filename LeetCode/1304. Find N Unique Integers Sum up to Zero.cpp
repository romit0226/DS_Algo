class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> r;
        
            int x=-n/2;
        int a=n;
        if(n%2==0){
            n++;
        }
            for(int i=1;i<=n;i++){
                if(x==0 && a%2==0){
                 
                }else{
                r.push_back(x);
                }
                x++;
            }
        return r;
        
        
        
        
    }
};
