class Solution {
public:
    /*
    int helper(int n, vector<int> &dp){
        if(dp[n] != -1) return dp[n];
        if(n == 0) return 0;
        if(n == 1 || n == 2) return dp[n] = n;
        int left = helper(n-2, dp);
        int right = helper(n-1, dp);
        return dp[n] = left + right;
    }
    */
    int climbStairs(int n) {
        /*
        // memoization
        vector<int> dp(n+1, -1);
        return helper(n, dp);
        */
        // Tabulation
        vector<int> dp(n+1, 0);
        dp[0] = 0, dp[1] = 1;
        if(n >= 2) dp[2] = 2;
        for(int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        
        /*
        // space optimization
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        int oneBack = 2;
        int twoBack = 1;
        int allstep;
        for(int i = 3; i <= n; i++){
            allstep = oneBack + twoBack;
            twoBack = oneBack;
            oneBack = allstep;
        }
        return oneBack;
        */
    }
};