class Solution {
public:
    int fun(int i, vector<int> &coins, int amount, vector<vector<int>> &dp){
        if(amount == 0 && i == 0) return 0;
        if(i < 0 && amount != 0) return 1e9;
        if(dp[i][amount] != -1) return dp[i][amount];
        int ans = fun(i-1,coins,amount, dp);
        if(coins[i] <= amount){
            ans = min(ans, 1+fun(i, coins, amount-coins[i], dp));
        }
        return dp[i][amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int res = fun(n-1, coins, amount, dp);
        return res >= 1e9 ? -1 : res;
    }
};