class Solution {
public:
    /*
    // memoization.
    int helper(int idx,vector<int> &arr, vector<int> &dp){
        if(dp[idx] != -1) return dp[idx];
        if(idx == 0 || idx == 1) return arr[idx];
        int left = arr[idx] + helper(idx-1, arr, dp);
        int right = arr[idx] + helper(idx-2, arr, dp);
        return dp[idx] = min(left, right);
    }
    */
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        /*
        // memoization
        vector<int> dp(n, -1);
        return min(helper(n-1, cost, dp), helper(n-2, cost, dp));
        */
        // Tabulation
        vector<int> dp(n, 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i < n; i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};