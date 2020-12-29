class Solution {
public:
    int fib(int N) {
       int lookup[N+1];
    if (N < 1)
        return 0;
    
    lookup[0] = 0;
    lookup[1] = 1;
    
    int i = 2;
    while (i <= N) {
        lookup[i] = lookup[i-1] + lookup[i-2];
        i++;
    }
    return lookup[N];
        
    }
};
