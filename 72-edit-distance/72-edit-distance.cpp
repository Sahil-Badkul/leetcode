class Solution {
public:
    int memo(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        // base cases
        if(i == 0) return j;
        if(j == 0) return i;
        // memo check
        if(dp[i][j] != -1) return dp[i][j];
        // matches
        if(s1[i-1] == s2[j-1]){
            return dp[i][j] = memo(i-1, j-1, s1, s2, dp);
        }
        // not matches
        int insert = 1 + memo(i, j-1, s1, s2, dp);
        int del = 1 + memo(i-1, j, s1, s2, dp);
        int replace = 1 + memo(i-1, j-1, s1, s2, dp);
        return dp[i][j] = min(insert, min(del, replace));
    }
    int minDistance(string &s1, string &s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return memo(n, m, s1, s2, dp);
    }
};