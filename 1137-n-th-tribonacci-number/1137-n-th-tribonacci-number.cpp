class Solution {
public:
    int helper(int n, vector<long long> &dp){
        if(dp[n] != -1) return dp[n];
        else if(n == 0) return dp[0] = 0;
        else if(n == 1 || n == 2) return dp[n] = 1;
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp) + helper(n - 3, dp);
    }
    int tribonacci(int n) {
        vector<long long> dp(n+1, -1);
        return helper(n, dp);
    }
};