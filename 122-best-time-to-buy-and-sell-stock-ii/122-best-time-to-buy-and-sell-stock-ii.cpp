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
    int tabulation(vector<int> &price){
        int n = price.size();
        vector<vector<int>> dp(n+1, vector<int> (2, 0));
        
        for(int idx = n-1; idx >= 0; idx--){
            for(int buy = 0; buy < 2; buy++){
                int profit = 0;
                if(buy){
                    profit = max(-price[idx] + dp[idx+1][0],
                        0 + dp[idx+1][1]);
                }else{
                    profit = max(price[idx] + dp[idx+1][1],
                           0 + dp[idx+1][0]);
                }
                dp[idx][buy] = profit;
            }
        }
        return dp[0][1];
    }
    int spaceOptimize(vector<int> &price){
        int n = price.size();
        vector<int> ahead(2, 0), curr(2, 0);
        
        for(int idx = n-1; idx >= 0; idx--){
            for(int buy = 0; buy < 2; buy++){
                int profit = 0;
                if(buy){
                    profit = max(-price[idx] + ahead[0],
                        0 + ahead[1]);
                }else{
                    profit = max(price[idx] + ahead[1],
                           0 + ahead[0]);
                }
                curr[buy] = profit;
            }
            ahead = curr;
        }
        return ahead[1];
    }
    int usingVariable(vector<int> &price){
        int n = price.size();
        int aheadNotBuy = 0, aheadBuy = 0;
        int currNotBuy = 0, currBuy = 0;
        for(int i = n-1; i >= 0; i--){
            currNotBuy = max(price[i] + aheadBuy, 
                            0 + aheadNotBuy);
            currBuy = max(-price[i] + aheadNotBuy, 
                         0 + aheadBuy);
            aheadBuy = currBuy;
            aheadNotBuy = currNotBuy;
        }
        return aheadBuy;
        
    }
    int maxProfit(vector<int>& prices) {
        // return memoization(prices);
        // return tabulation(prices);
        // return spaceOptimize(prices);
        return usingVariable(prices);
    }
};