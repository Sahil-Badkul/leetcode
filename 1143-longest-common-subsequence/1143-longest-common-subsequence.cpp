class Solution {
public:
    int memo(int idx1, int idx2, string &s1, string &s2, vector<vector<int>> &dp){
        if(idx1 < 0 || idx2 < 0) return 0;
        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
        if(s1[idx1] == s2[idx2]) return dp[idx1][idx2] = (1 + memo(idx1-1, idx2-1, s1, s2, dp));
        return dp[idx1][idx2] = max(memo(idx1-1, idx2, s1, s2, dp), memo(idx1, idx2-1, s1, s2, dp));
    }
    int memoization(string text1, string text2){
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return memo(n-1, m-1, text1, text2, dp);
    }
    int longestCommonSubsequence(string text1, string text2) {
        return memoization(text1, text2);
    }
};