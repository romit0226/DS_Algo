class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int x=nums.size();
        int count=0;
        for(int i=0;i<x;i++){
            for(int j=i+1;j<x;j++){
                if(nums[j]==nums[i] && i<j){
                count++;
                }
            }
        }   
        return count;
    }
};
