class Solution {
public:
    int memo(int idx, int buy, vector<int> &price, vector<vector<int>> &dp){
        if(idx == price.size()){
            return 0;
        }
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit = 0;
        if(buy){
            profit = max(-price[idx] + memo(idx+1, 0, price, dp), 
                        0 + memo(idx+1, 1, price, dp));
        }else{
            profit = max(price[idx] + memo(idx+1, 1, price, dp), 
                        memo(idx+1, 0, price, dp));
        }
        return dp[idx][buy] = profit;
    }
    int memoization(vector<int> &prices){
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));
        return memo(0, 1, prices, dp);
    }
    int maxProfit(vector<int>& prices) {
        return memoization(prices);
    }
};