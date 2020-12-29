class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> v;
        
       int len=nums.size();
        sort(nums.begin(),nums.end());
        v.push_back(nums[0]);
        
        for(int i=1;i<len;i++){
            if(nums[i]>nums[i-1])
                v.push_back(nums[i]);
            
            
        }
        if(v.size()>=3){
            return v[v.size()-3];
        }else{
            return v[v.size()-1];
        }
        
    }
};
