class Solution {
public:
    
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> v(2*n,0);
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                v[i]=nums[i-x];
            x++;
            }else{
                v[i]=nums[n+i-x];
            }
        }
        
        
        
        return v;
        
    }
};
