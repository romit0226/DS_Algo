class Solution {
public:
   int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int max1=max(nums[0],nums[1]),max2=min(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            if(nums[i]>max1)
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]<max1 && nums[i]>max2)
            {
                max2=nums[i];
            }
            else if(nums[i]==max1)
            {
                max2=nums[i];
            }
        }
        return (max1-1)*(max2-1);
   }
};
