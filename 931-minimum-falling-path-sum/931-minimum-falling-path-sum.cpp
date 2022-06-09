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
    int tabulation(vector<vector<int>> &matrix){
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int> (n, 0));
        for(int i = 0; i < n; i++){
            dp[0][i] = matrix[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int up = dp[i-1][j];
                int ld = j-1 < 0 ? INT_MAX : dp[i-1][j-1];
                int rd = j+1 == n ? INT_MAX : dp[i-1][j+1];
                dp[i][j] = matrix[i][j] + min(up, min(ld, rd));
            }
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(mini, dp[n-1][i]);
        }
        return mini;
    }
    int spaceOptimize(vector<vector<int>> &matrix){
        int n = matrix.size();
        vector<int> prev(n, 0), curr(n, 0);
        for(int i = 0; i < n; i++){
            prev[i] = matrix[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int up = prev[j];
                int ld = j-1 < 0 ? INT_MAX : prev[j-1];
                int rd = j+1 == n ? INT_MAX : prev[j+1];
                curr[j] = matrix[i][j] + min(up, min(ld, rd));
            }
            prev = curr;
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(mini, prev[i]);
        }
        return mini;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        // return memoization(matrix);
        // return tabulation(matrix);
        return spaceOptimize(matrix);
    }
};