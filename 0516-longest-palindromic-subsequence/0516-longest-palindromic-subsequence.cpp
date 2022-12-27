class Solution {
public:
    int dp[1001][1001];
    int lcs(int i, int j, string &a, string &b){
        if(i == -1 or j == -1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(a[i] == b[j]) return dp[i][j] = 1 + lcs(i-1, j-1, a, b);
        return dp[i][j] = max(lcs(i-1, j, a, b), lcs(i, j-1, a, b));
    }
    int lcs(string &a, string &b){
        dp[0][0] = 1;
        for(int i = 0; i <= a.size(); i++){
            for(int j = 0; j <= b.size(); j++){
                if(i == 0 or j == 0){
                    dp[i][j] = 0;
                }else if(a[i-1] == b[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[a.size()][b.size()];
    }
    int longestPalindromeSubseq(string s) {
        memset(dp, 0, sizeof(dp));
        int n = s.size();
        string b = s;
        reverse(b.begin(), b.end());
        // return lcs(n-1, n-1, s, b);
        return lcs(s,b);
    }
};