class Solution {
public:
    inline bool allStars(string &s, int i){
        for(int j = 0; j < i; j++){
            if(s[j] != '*')
                return false;
        }
        return true;
    }
    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &dp){
        // Base condition
        if(i < 0 && j < 0)
            return true;
        if(i < 0 && j >= 0) 
            return false;
        if(j < 0 && i >= 0)
            return allStars(s, i);
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s[i] == p[j] || s[i] == '?')
            return dp[i][j] = helper(i-1, j-1, s, p, dp);
        else if(s[i] == '*'){
            return dp[i][j] = (helper(i, j-1, s, p, dp) or helper(i-1, j, s, p, dp));
        }
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        swap(s, p);
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, false));
        dp[0][0] = true;
        for(int i = 1; i <= n; i++){
            dp[i][0] = allStars(s, i);
        }
        for(int j = 1; j <= m; j++){
            dp[0][j] = false;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s[i-1] == p[j-1] || s[i-1] == '?'){
                    dp[i][j] = dp[i-1][j-1];
                }else if(s[i-1] == '*'){
                    dp[i][j] = (dp[i][j-1] or dp[i-1][j]);
                }else{
                    dp[i][j] = false;
                }
            }
        }
        return dp[n][m];
    }
};