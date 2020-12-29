class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
       
        vector<int> v;
        
        for(int i=0;i<A.size();i++){
            int x=A[i]*A[i];
            v.push_back(x);
            
        }
        sort(v.begin(),v.end());
        return v;
    }
};
