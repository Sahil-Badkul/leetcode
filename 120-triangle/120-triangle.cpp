class Solution {
public:
    int memo(int i, int j, vector<vector<int>> &tri, int n, vector<vector<int>> &dp){
    if(i == n-1) return tri[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int d = tri[i][j] + memo(i+1, j, tri, n, dp);
    int dg = tri[i][j] + memo(i+1, j+1, tri, n, dp);
    return dp[i][j] = min(d, dg);
}
int memoization(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n, vector<int> (n, -1));
    return memo(0, 0, triangle, n, dp);
}
int tabulation(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n, vector<int> (n, 0));
    for(int j = 0; j < n; j++){
        dp[n-1][j] = triangle[n-1][j];
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            int d = triangle[i][j] + dp[i+1][j];
            int dg = triangle[i][j] + dp[i+1][j+1];
            dp[i][j] = min(d, dg);
        }
    }
    return dp[0][0];
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        //    return memoization(triangle, n);
    return tabulation(triangle, n);
    }
};