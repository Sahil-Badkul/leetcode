class Solution {
public:
    int f(int i, int j, int k, string &s1, string &s2, string &s3, vector<vector<int>> &dp){
        if(i == s1.size() && j == s2.size() && k == s3.size()){
            return dp[i][j]= 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(i < s1.size() && j < s2.size() && s1[i] == s3[k] && s2[j] == s3[k]){
            return dp[i][j] =(f(i+1, j, k+1, s1, s2, s3, dp) || f(i, j+1, k+1, s1, s2, s3, dp));
        }else if(i < s1.size() && s1[i] == s3[k]){
            return dp[i][j] = f(i+1, j, k+1 ,s1, s2, s3, dp);
        }else if(j < s2.size() && s2[j] == s3[k]){
            return dp[i][j] = f(i, j+1, k+1, s1, s2, s3, dp);
        }
        return dp[i][j] = 0;
    }
    int memoization(string s1, string s2, string s3){
        int n = s1.size(), m = s2.size(), k = s3.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return f(0, 0, 0, s1, s2, s3, dp);
    }
    int tabulation(string s1, string s2, string s3){
        int n = s1.size(), m = s2.size(), l = s3.size();
        if(n + m != l) return 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                }
                else if(i == 0){
                    dp[i][j] = dp[i][j-1] && s2[j-1] == s3[i+j-1];
                }else if(j == 0){
                    dp[i][j] = dp[i-1][j] && s1[i-1] == s3[i+j-1];
                }else{
                    dp[i][j] = ((dp[i][j-1] && s2[j-1] == s3[i+j-1]) || (dp[i-1][j] && s1[i-1] == s3[i+j-1]));
                }
            }
        }
        return dp[n][m];
    }
    int spaceOptimization(string s1, string s2, string s3){
        int n = s1.size(), m = s2.size(), l = s3.size();
        if(n + m != l) return 0;
        vector<int> curr(m+1, 0), prev(m+1, 0);;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 && j == 0){
                    curr[j] = 1;
                }
                else if(i == 0){
                    curr[j] = curr[j-1] && s2[j-1] == s3[i+j-1];
                }else if(j == 0){
                    curr[j] = prev[j] && s1[i-1] == s3[i+j-1];
                }else{
                    curr[j] = ((curr[j-1] && s2[j-1] == s3[i+j-1]) || (prev[j] && s1[i-1] == s3[i+j-1]));
                }
            }
            prev = curr;
        }
        return curr[m];
    }
    bool isInterleave(string s1, string s2, string s3) {
        // return memoization(s1, s2, s3);
        // return tabulation(s1, s2, s3);
        return spaceOptimization(s1, s2, s3);
    }
};