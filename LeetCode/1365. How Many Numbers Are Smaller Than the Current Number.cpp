class Solution {
public:
     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        unordered_map<int, int> order;
        for(int i = 0; i < sorted.size(); i++){
            if(order.find(sorted[i]) == order.end()) {
                order[sorted[i]] = i;
            }
        }
        
        
        for(int i = 0; i < nums.size(); i++) {
            sorted[i] = order[nums[i]];
        }
        return sorted;
        
    }
};
