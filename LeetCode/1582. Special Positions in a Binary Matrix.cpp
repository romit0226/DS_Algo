class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    int sum1=0;
                    int sum2=0;
                    for(int a=0;a<mat.size();a++){
                        sum1+=mat[a][j];
                    }
                    for(int b=0;b<mat[i].size();b++){
                        sum2+=mat[i][b];
                    }
                    if(sum1 == 1 and sum2 == 1){
                    cnt++;
                }
                }
            }
        }
        return cnt;
    }
};
