class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), min_price = prices[0], max_profit = 0;
        for(int i = 0; i < n; i++){
            if(min_price > prices[i]){
                min_price = prices[i];
            }
            max_profit = max(max_profit, prices[i] - min_price);
        }
        return max_profit;
    }
};