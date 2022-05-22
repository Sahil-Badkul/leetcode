class Solution {
public:
    int helper(int idx,vector<int> &arr, vector<int> &dp){
        if(dp[idx] != -1) return dp[idx];
        if(idx == 0 || idx == 1) return arr[idx];
        int left = arr[idx] + helper(idx-1, arr, dp);
        int right = arr[idx] + helper(idx-2, arr, dp);
        return dp[idx] = min(left, right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(helper(n-1, cost, dp), helper(n-2, cost, dp));
    }
};