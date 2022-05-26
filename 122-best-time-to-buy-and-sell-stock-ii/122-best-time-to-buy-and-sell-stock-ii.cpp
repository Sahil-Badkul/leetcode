class Solution {
public:
    //Peak valley approach
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int max_profit = 0;
        int peak = prices[0], valley = prices[0];
        while(i < n - 1){
            // finding valley
            while(i < n - 1 and prices[i] >= prices[i+1]) i++;
            valley = prices[i];
            // finding peak
            while(i < n - 1 and prices[i] <= prices[i+1]) i++;
            peak = prices[i];
            // calculation profit
            max_profit += peak - valley;
        }
        return max_profit;
    }
};