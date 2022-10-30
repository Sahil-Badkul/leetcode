class Solution {
public:
    int helper(int i, int j, int n, int m,vector<vector<int>>& arr, vector<vector<int>> &dp){
        if(i >= n or j >= m or i < 0 or j < 0) return 0;
        if(arr[i][j] == 1) return 0;
        if(i == n-1 && j == m-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = helper(i+1, j, n, m, arr, dp) + helper(i, j+1, n, m, arr, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return helper(0, 0, n, m,arr, dp);
    }
};