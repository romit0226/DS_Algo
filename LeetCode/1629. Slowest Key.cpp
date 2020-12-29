class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int diff=0;;
        char strx;
        vector<char> v;
        
        for(int i=0;i<releaseTimes.size();i++){
            int diffe=0;
           if(i==0){
                  diffe=releaseTimes[0];
              }else{
            diffe=releaseTimes[i]-releaseTimes[i-1];
              }
            if(diffe>diff){
                diff=diffe;
               
            }
            
        }
          for(int i=0;i<releaseTimes.size();i++){
              int diffe=0;
              if(i==0){
                  diffe=releaseTimes[0];
              }else{
            diffe=releaseTimes[i]-releaseTimes[i-1];
              }
            if(diffe==diff){
                v.push_back(keysPressed[i]);
               
            }
              
            
        }
        
        sort(v.begin(),v.end());
        int x=v.size();
        return v[x-1];
        
        
       
    }
};
