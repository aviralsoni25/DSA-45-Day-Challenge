class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minprice = INT_MAX;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }
            int profit = prices[i] - minprice;
            if(profit > max_profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
};