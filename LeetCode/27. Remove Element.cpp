class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                cnt++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        return v;
    }
    
};
