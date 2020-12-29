class Solution {
public:
int maxProfit(vector<int> & stock_price) {

    int n = stock_price.size();
	
    if(n<=1) 
       return 0; 
    
    int i, cost = stock_price[0], maxProfit = 0;
    for(i=1;i<n;i++)
    {
        maxProfit = max(stock_price[i]-cost, maxProfit);
        if(stock_price[i]<cost)
            cost = stock_price[i];
    }
    return maxProfit;
}
};
