class Solution {
public:
    int memo(int i, int j, int n, vector<vector<int>> &mat, vector<vector<int>> &dp){
        if(j < 0 || j == n){
            return INT_MAX;
        }
        if(i == 0){
            return mat[i][j];
        }
        if(dp[i][j] != -1) return dp[i][j];
        int up = memo(i-1, j, n, mat, dp);
        int ld = memo(i-1, j-1, n, mat, dp);
        int rd = memo(i-1, j+1, n, mat, dp);
        return dp[i][j] = mat[i][j] + min(up, min(ld, rd));
    }
    int memoization(vector<vector<int>> &matrix){
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            int res = memo(n-1, i, n, matrix, dp);
            // cout<<res<<" ";
            mini = min(mini, res);
        }
        return mini;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        return memoization(matrix);
    }
};