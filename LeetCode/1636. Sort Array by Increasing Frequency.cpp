#include<bits/stdc++.h>
 bool sortByVal(const pair<int, int>& a, 
                      const pair<int, int>& b)
{
 
   // If frequency is same then sort by index
   if (a.second == b.second)  
       return a.first < b.first;
 
   return a.second > b.second;
}
class Solution {
public:
   
    vector<int> frequencySort(vector<int>& nums) {
        
        
   vector<int>res;
        int n=nums.size();
        
 
   unordered_map<int, int> m;
 
   vector<pair<int, int> > v;
 
   for (int i = 0; i < n; ++i) {
 
       // Map m is used to keep track of count  
       // of elements in array
       m[nums[i]]++;      
   }
 
   // Copy map to vector
   copy(m.begin(), m.end(), back_inserter(v));
 
   // Sort the element of array by frequency
   sort(v.begin(), v.end(), sortByVal);
 
   for (int i = 0; i < v.size(); ++i)  
      while(v[i].second--)
      {
              res.push_back(v[i].first);
      }
 
   
        vector<int> finalans;
        for(int i=res.size()-1;i>=0;i--){
            finalans.push_back(res[i]);
        }
        
        return finalans;
    }
};
