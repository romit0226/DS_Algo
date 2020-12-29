class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool x=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                x=true;
                break;
            }
        }
        return x;
    }
};
