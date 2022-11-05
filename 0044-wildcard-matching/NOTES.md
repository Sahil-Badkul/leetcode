class Solution {
public:
bool memo(int i, int j, string &s, string &p, vector<vector<int>> &dp){
if(i < 0 && j < 0) return true;
if(i < 0 && j >= 0) return false;
if(i >= 0 && j < 0){
for(int ii = 0; ii <= i; ii++){
if(s[ii] != '*') return false;
}
return true;
}
if(dp[i][j] != -1) return dp[i][j];
if(s[i] == p[j] or s[i] == '?'){
return dp[i][j] = memo(i-1, j-1, s, p, dp);
}
else if(s[i] == '*'){
return dp[i][j] = (memo(i-1, j, s, p, dp) or memo(i, j-1, s, p, dp));
}
return dp[i][j] = false;
}
bool isMatch(string s, string p) {
swap(s, p);
int n = s.size();
int m = p.size();
vector<vector<int>> dp(n, vector<int> (m, -1));
return memo(n-1, m-1, s, p, dp);
}
};