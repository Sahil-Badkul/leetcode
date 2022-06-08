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
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return memo(0, s, dp);
    }
};