class Solution {
public:
    int memo(int i, string &s, vector<int> &dp){
        if(i >= s.size()) return 1;
        else if(s[i] == '0') return 0;
        else if(i == s.size()-1) return 1;
        else if(dp[i] != -1) return dp[i];
        else if(s[i]=='1' || s[i] == '2' && 
               (s[i+1] >= '0' and s[i+1] <= '6')){
            return dp[i] = memo(i+1, s, dp) + memo(i+2, s, dp);
        }
        return dp[i] = memo(i+1, s, dp);
    }
    int memoization(string &s){
        vector<int> dp(s.size(), -1);
        return memo(0, s, dp);
    }
    int tabulation(string &s){
        int n = s.size();
        vector<int> dp(n+1, 0);
        if(n == 0 || s[0] == '0') return 0;
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            if(s[i-1] >= '1' && s[i-1] <= '9'){
                dp[i] = dp[i-1];
            }
            if(s[i-2] == '1'){
                dp[i] += dp[i-2];
            }
            else if(s[i-2] == '2' && (s[i-1] >= '0' && s[i-1] <= '6')){
                dp[i] += dp[i-2];
            }
        }
        return dp[n];
    }
    int numDecodings(string s) {
        // return memoization(s);
        return tabulation(s);
    }
};