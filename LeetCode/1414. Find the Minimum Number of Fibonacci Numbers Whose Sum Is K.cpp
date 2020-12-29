class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        
        
        vector<unsigned long long int> v;
       v.push_back(1);
          v.push_back(1);
        
       
               for(long long int i=2;i<1e10;i++){
           unsigned  long long int x=v[i-1]+v[i-2];
                   if(x>k){
                       break;
                   }
            v.push_back(x);
        }
        
        
        int count=0;
        int i=v.size()-1;
       while(k>0){
           if(v[i]<=k){
               k-=v[i];
               count++;
           }
           i--;
         
       }
        
        
        
        return count;
    }
};
