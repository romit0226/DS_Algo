class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> height;
        height=heights;
        sort(height.begin(),height.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(height[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};
