class Solution {
public:
   bool is_odd(int n)   {    return n % 2 != 0;   }
   
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        
        if(arr.size() < 3)
            return false;

        for(int i = 2; i < arr.size(); i++){

            if(is_odd(arr[i]) && is_odd(arr[i - 1]) && is_odd(arr[i - 2]))
                return true;

        }

        return false; 
        
    }
};
