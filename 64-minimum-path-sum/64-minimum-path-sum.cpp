class Solution {
public:
    int memo(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
    if(i == 0 && j == 0) return grid[0][0];
    if(i < 0 || j < 0) return 1e9;
    if(dp[i][j] != -1) return dp[i][j];
    int left = grid[i][j] + memo(i, j-1, grid, dp);
    int up = grid[i][j] + memo(i-1, j, grid, dp);
    return dp[i][j] = min(left, up);
}
int memoization(int n, int m, vector<vector<int>> &grid){
    vector<vector<int>> dp(n, vector<int> (m, -1));
    return memo(n-1, m-1, grid, dp);
}
int tabulation(int n, int m, vector<vector<int>> &grid){
    vector<vector<int>> dp(n, vector<int>(m,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0) dp[0][0] = grid[0][0];
            else{
                int up = grid[i][j], left = grid[i][j];
                if(i > 0) up += dp[i-1][j];
                else up += 1e9;
                if(j > 0) left += dp[i][j-1];
                else left += 1e9;
                dp[i][j] = min(up, left);
            }
        }
    }
    return dp[n-1][m-1];
}
int spaceOptimize(int n, int m, vector<vector<int>> &grid){
    vector<int> prev(m, 0);
    for(int i = 0; i < n; i++){
        vector<int> temp(m, 0);
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0) temp[0] = grid[0][0];
            else{
                int up = grid[i][j], left = grid[i][j];
                if(i > 0) up += prev[j];
                else up += 1e9;
                if(j > 0) left += temp[j-1];
                else left += 1e9;
                temp[j] = min(up, left);
            }
        }
        prev = temp;
    }
    return prev[m-1];
}
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
    int m = grid[0].size();
    return memoization(n,m,grid);
    // return tabulation(n, m, grid);
    // return spaceOptimize(n,m,grid);
    }
};