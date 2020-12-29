class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int fp = 0,sp = numbers.size()-1,sum;
        while(fp<sp)
        {
            sum = numbers[sp] + numbers[fp];
            if(sum < target)
                fp++;
            else if(sum > target)
                sp--;
            else
                return {fp+1,sp+1};
        }
        return {};
    }
};
