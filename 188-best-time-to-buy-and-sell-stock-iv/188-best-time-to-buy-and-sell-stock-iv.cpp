class Solution {
public:
        int memo(int idx, int buy, int cap, vector<int> &price, vector<vector<vector<int>>> &dp){
        if(idx == price.size() || cap == 0){
            return 0;
        }
        if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];
        int profit = 0;
        if(buy){
            profit = max(-price[idx] + memo(idx+1, 0, cap, price, dp), 
                        0 + memo(idx+1, 1, cap, price, dp));
        }else{
            profit = max(price[idx] + memo(idx+1, 1, cap-1, price, dp), 
                        memo(idx+1, 0, cap, price, dp));
        }
        return dp[idx][buy][cap] = profit;
    }
    int memoization(vector<int> &prices, int k){
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector(2, vector<int> (k+1, -1)));
        return memo(0, 1, k, prices, dp);
    }
    int maxProfit(int k, vector<int>& prices) {
        return memoization(prices, k);
    }
};