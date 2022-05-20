class Solution {
public:
    int tribonacci(int n) {
        int prev3 = 0, prev2 = 1, prev = 1;
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        int curr = 0;
        for(int i = 3; i <= n; i++){
            curr = prev + prev2 + prev3;
            prev3 = prev2;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    /*
    // memoization
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
    */
};