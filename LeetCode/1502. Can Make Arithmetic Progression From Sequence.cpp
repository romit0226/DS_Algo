#include<bits/stdc++.h>
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
       sort(arr.begin(),arr.end());
        int n =  arr.size();
        int  a = arr[0];
        int d =  abs(arr[0]-arr[1]);
        if(d == 0)
        {
            for(auto &it : arr)
            {
                if(it !=arr[0]){
                    return false;
                }
            }
            return true;
        }
        for(auto &it : arr)
        {
            it -= a;
            it =  it/d;
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i] != 1)
            {
                return false;
            }
        }
        return true;
    }
};
