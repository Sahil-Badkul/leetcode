class Solution {
public:
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
    int tabulation(vector<int> &num, int x)
    {
        int n = num.size();
        vector<vector<int>> dp(n, vector<int> (x+1, 0));
        for(int T = 0; T <= x; T++){
            if(T % num[0] == 0) dp[0][T] = T/num[0];
            else dp[0][T] = 1e9;
        }
        for(int ind = 1; ind < n; ind++){
            for(int T = 0; T <= x; T++){
                int notTake = dp[ind-1][T];
                int take = INT_MAX;
                if(num[ind] <= T){
                    take = 1 + dp[ind][T-num[ind]];
                }
                dp[ind][T] = min(take, notTake);
            }
        }
        int ans = dp[n-1][x];
        if(ans >= 1e9) return -1;
        return ans;
    }
    int spaceOptimize(vector<int> &num, int x)
    {
        int n = num.size();
        vector<int> prev(x+1, 0), curr(x+1, 0);
        for(int T = 0; T <= x; T++){
            if(T % num[0] == 0) prev[T] = T/num[0];
            else prev[T] = 1e9;
        }
        for(int ind = 1; ind < n; ind++){
            for(int T = 0; T <= x; T++){
                int notTake = prev[T];
                int take = INT_MAX;
                if(num[ind] <= T){
                    take = 1 + curr[T-num[ind]];
                }
                curr[T] = min(take, notTake);
            }
            prev = curr;
        }
        int ans = prev[x];
        if(ans >= 1e9) return -1;
        return ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        // return memoization(coins, amount);
        // return tabulation(coins, amount);
        return spaceOptimize(coins, amount);
    }
};