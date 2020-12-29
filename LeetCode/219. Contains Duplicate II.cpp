class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
      for(int i=0;i<nums.size();i++)
      {
        int val=nums[i];
        if(mp.count(val) and i-mp[val]<=k)return true;
        mp[val]=i;
      }
      return false;
        
        
        
        
        
    }
};
