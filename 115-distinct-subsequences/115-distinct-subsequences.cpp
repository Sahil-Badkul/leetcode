typedef unsigned long long ull;
class Solution {
public:
    int numDistinct(string s, string t) {
        int n = t.size();
        int m = s.size();
        vector<vector<ull>> dp(n+1, vector<ull>(m+1,0));
        
        for(int j = 0; j <= m; j++)
            dp[0][j] = 1;   // for empty string
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(t[i-1] == s[j-1]){
                    //match
                    dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
                }else{
                    //dont match
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
        return dp[n][m];
    }
};