int memo(int ind, int T, vector<int>&num, vector<vector<int>> &dp){
if(ind == 0){
if(T%num[0] == 0) return T/num[0];
return 1e9;
}
if(dp[ind][T] != -1) return dp[ind][T];
int notTake = memo(ind-1, T, num, dp);
int take = INT_MAX;
if(num[ind] <= T){
take = 1 + memo(ind, T-num[ind], num, dp);
}
return dp[ind][T] = min(take, notTake);
}
int memoization(vector<int> &num, int x)
{
int n = num.size();
vector<vector<int>> dp(n, vector<int> (x+1, -1));
int ans = memo(n-1, x, num, dp);
if(ans >= 1e9) return -1;
return ans;
}