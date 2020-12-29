class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int i, ec=0, oc=0;
        for(i=0; i<position.size(); i++) {
            if(position[i]&1) oc++;
            else ec++;
        }
        return min(oc, ec);
        
    }
};
