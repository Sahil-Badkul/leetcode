class Solution {
public:
    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &dp){
        if(j == p.size()){
            return i == s.size();
        }
        if(dp[i][j] >= 0) return dp[i][j];
        bool first_match = (i < s.size() && (p[j] == s[i] || p[j] == '.')); 
        bool ans = 0;
        if(j+1 < p.size() && p[j+1] == '*'){
            ans = helper(i, j+2, s, p, dp) || ( first_match && helper(i+1, j, s, p, dp));
        }else{ 
            ans = (first_match && helper(i+1, j+1, s, p, dp));
        }
        dp[i][j] = ans;
        return ans;
    }
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return helper(0,0, s, p, dp);
    }
};