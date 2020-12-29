class Solution {
public:
    int xorOperation(int n, int start) {
      int sum = 0;
        for(int i = start; i < start + 2*n; i = i + 2){
            sum ^= i;
        } 
        return sum;
    
    }
};
