class Solution {
public:
    int tabulation(vector<int> &price, int fee){
        int n = price.size();
        vector<vector<int>> dp(n+1, vector<int> (2, 0));
        
        for(int idx = n-1; idx >= 0; idx--){
            for(int buy = 0; buy < 2; buy++){
                int profit = 0;
                if(buy){
                    profit = max(-price[idx] + dp[idx+1][0],
                        0 + dp[idx+1][1]);
                }else{
                    profit = max(price[idx] + dp[idx+1][1] - fee,
                           0 + dp[idx+1][0]);
                }
                dp[idx][buy] = profit;
            }
        }
        return dp[0][1];
    }
    int spaceOptimize(vector<int> &price, int fee){
        int n = price.size();
        vector<int> ahead(2, 0), curr(2, 0);
        for(int i = n-1; i >= 0; i--){
            for(int buy = 0; buy <=1 ; buy++){
                int profit = 0;
                if(buy){
                    profit = max(-price[i] + ahead[0], 
                                0 + ahead[1]);
                }else{
                    profit = max(price[i] + ahead[1] - fee, 
                                0 + ahead[0]);
                }
                curr[buy] = profit;
            }
            ahead = curr;
        }
        return ahead[1];
    }
    int maxProfit(vector<int>& prices, int fee) {
        // return tabulation(prices, fee);
        return spaceOptimize(prices, fee);
    }
};