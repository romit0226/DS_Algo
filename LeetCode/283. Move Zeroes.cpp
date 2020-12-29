class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int l = 0, r = 0; // l is move-to, r is move-from
        while (r < nums.size())  {
            if (nums[r] != 0)  swap(nums[l++], nums[r]); // if nums[r] != 0, we need to move
            r++; // find the next to move
        }
        
        
    }
};
