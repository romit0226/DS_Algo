class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        
    int count=1;
    int major=0;
    for(int i=1;i<n;i++){
         
        if(nums[major]==nums[i])
            count++;
        else
            count--;
          if(count==0){
            major=i;
            count=1;
        }
      
    }
        return nums[major];
        
        
    }
};
