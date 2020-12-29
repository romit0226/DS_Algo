class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int p=INT_MIN,q=INT_MIN;
  
    for (int i = 0; i < n; i++) 
    { 
       p+=max(p,nums[i]+p);
        q=max(p,q);
    } 
    return q;
        
    }
};
