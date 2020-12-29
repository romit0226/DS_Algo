class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;i<accounts.size();i++){
            int n=0;
            for(int j=0;j<accounts[i].size();j++){
                n+=accounts[i][j];
            }
            if(n>max){
                max=n;
            }
        }
        return max;
    }
};
