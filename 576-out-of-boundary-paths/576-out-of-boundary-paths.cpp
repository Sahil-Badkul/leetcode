class Solution {
private:
    int m, n;
    int mod = 1e9+7;
    vector<vector<vector<long>>> dp;
    int helper(int i,int j, int move){
        if(move == 0) return 0;
        if(i == m || j == n || i < 0 || j < 0) return 1;
        if(dp[i][j][move] != -1) return dp[i][j][move];
        long left = helper(i, j-1, move-1)%mod;
        long right = helper(i, j+1, move-1)%mod;
        long top = helper(i-1, j, move-1)%mod;
        long down = helper(i+1, j, move-1)%mod;
        return dp[i][j][move] = (left + right + top + down)%mod;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        this->m = m;
        this->n = n;
        dp.resize(m,vector<vector<long>>(n,vector<long> (maxMove+2, -1)));
        return (int)helper(startRow, startColumn, maxMove+1);
    }
};