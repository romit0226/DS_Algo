class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        bool isOdd = A[0].size() % 2;
        int center;
        if (isOdd) center = A[0].size() / 2;
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0, k = A[i].size() - 1; j < k; j++, k--) {
                int t = A[i][j];
                A[i][j] = A[i][k];
                A[i][k] = t;
                A[i][j] ^= 1;
                A[i][k] ^= 1;
            }
            if (isOdd) A[i][center] ^= 1;
        }
        return A;
        
      
        
        
    }
};
