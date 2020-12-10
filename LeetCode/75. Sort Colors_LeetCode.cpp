//LeetCode 75. Sort Colors
//sort 0,1,2 without using sorting alog




void sortColors(vector<int>& nums) {
       
        int lo = 0, hi = nums.size()-1;
        for (int i = 0; i <= hi; i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[lo++]);
            } else if (nums[i] == 2) {
                swap(nums[i--], nums[hi--]);
            }
        
        }
      
    }
