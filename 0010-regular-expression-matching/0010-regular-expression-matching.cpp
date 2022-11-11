class Solution {
public:
     bool helper(string s, string p, int i, int j,vector<vector<int>> &dp)
    {
        if(j==p.length())
            return i==s.length();
        if(dp[i][j]>=0)
            return dp[i][j];
        bool first_match=(i<s.length() && (s[i]==p[j] || p[j]=='.' ));
        bool ans=0;
        if(j+1<p.length() && p[j+1]=='*')
        {
            ans= (helper(s,p,i,j+2,dp)|| (first_match && helper(s,p,i+1,j,dp) ));
        }
        else
        {
            ans= (first_match && helper(s,p,i+1,j+1,dp));
        }
        dp[i][j]=ans;
        return ans;
    }
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n+1, vector<int>(m, -1));
        return helper(s,p,0,0,dp);
    }
};