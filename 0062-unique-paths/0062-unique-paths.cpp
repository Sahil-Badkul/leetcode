class Solution {
public:
    int helper(int i, int j, int m, int n, vector<vector<int>> & dp){
        if(i >= m or j >= n or i < 0 or j < 0) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = helper(i+1, j, m, n, dp) + helper(i, j+1, m, n, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp);
    }
};