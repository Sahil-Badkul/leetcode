class Solution {
public:
    int mod = 2e9 + 7;
int memo(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp){
    if(i >= 0 && j >= 0 && arr[i][j] == 1) return 0;
    if(i == 0 && j == 0) return 1;
    if(i < 0 || j < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int left = memo(i, j-1, arr, dp);
    int up = memo(i-1, j, arr, dp);
    return dp[i][j] = (left+up) % mod;
}
int tabulation(int n, int m, vector<vector<int>> &mat){
    vector<vector<int>> dp(n, vector<int> (m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1) dp[i][j] = 0;
            else if(i == 0 && j == 0){
                dp[i][j] = 1;
            }else{
                int up = 0, left = 0;
                if(i > 0) up = dp[i-1][j];
                if(j > 0) left = dp[i][j-1];
                dp[i][j] = (up + left) % mod;
            }
        }
    }
    return dp[n-1][m-1] % mod;
}
int spaceOptimize(int n, int m, vector<vector<int>> &mat){
    vector<int> prev(m, 0);
    for(int i = 0; i < n; i++){
        vector<int> temp(m, 0);
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1) temp[j] = 0;
            else if(i == 0 && j == 0){
                temp[j] = 1;
            }else{
                int up = 0, left = 0;
                if(i > 0) up = prev[j];
                if(j > 0) left = temp[j-1];
                temp[j] = (up + left) % mod;
            }
        }
        prev = temp;
    }
    return prev[m-1] % mod;
}
int memoization(int n, int m, vector<vector<int>> &mat){
    vector<vector<int>> dp(n, vector<int> (m,-1));
    return memo(n-1, m-1, mat, dp) % mod;
}
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        return memoization(n, m, mat);
    // return tabulation(n, m, mat);
    // return spaceOptimize(n,m,mat);
    }
};