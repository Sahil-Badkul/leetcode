class Solution {
public:
    int memo(int idx1, int idx2, string &s1, string &s2, vector<vector<int>> &dp){
        if(idx1 == 0 || idx2 == 0) return 0;
        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
        if(s1[idx1-1] == s2[idx2-1]) return dp[idx1][idx2] = (1 + memo(idx1-1, idx2-1, s1, s2, dp));
        return dp[idx1][idx2] = max(memo(idx1-1, idx2, s1, s2, dp), memo(idx1, idx2-1, s1, s2, dp));
    }
    int memoization(string &text1, string &text2){
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return memo(n, m, text1, text2, dp);
    }
    int tabulation(string &s1, string &s2){
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        for(int i = 0; i <= n; i++) dp[i][0] = 0;
        for(int j = 0; j <= m; j++) dp[0][j] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                // matches
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {
        // return memoization(text1, text2);
        return tabulation(text1, text2);
    }
};