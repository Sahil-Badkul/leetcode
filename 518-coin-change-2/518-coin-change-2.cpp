class Solution {
public:
    int memo(int ind, int T, vector<int>&num, vector<vector<int>> &dp){
        if(ind == 0){
            if(T%num[0] == 0) return 1;
            return 0;
        }
        if(dp[ind][T] != -1) return dp[ind][T];
        int notTake = memo(ind-1, T, num, dp);
        int take = 0;
        if(num[ind] <= T){
            take = memo(ind, T-num[ind], num, dp);
        }
        return dp[ind][T] = (take + notTake);
    }
    int memoization(vector<int> &num, int x)
    {
        int n = num.size();
        vector<vector<int>> dp(n, vector<int> (x+1, -1));
        return memo(n-1, x, num, dp);
    }
    int tabulation(vector<int> &num, int x)
    {
        int n = num.size();
        vector<vector<int>> dp(n, vector<int> (x+1, 0));
        for(int T = 0; T <= x; T++){
            if(T % num[0] == 0) dp[0][T] = 1;
            else dp[0][T] = 0;
        }
        for(int ind = 1; ind < n; ind++){
            for(int T = 0; T <= x; T++){
                int notTake = dp[ind-1][T];
                int take = 0;
                if(num[ind] <= T){
                    take = dp[ind][T-num[ind]];
                }
                dp[ind][T] = (take + notTake);
            }
        }
        return dp[n-1][x];
    }
    int change(int amount, vector<int>& coins) {      
        // return memoization(coins, amount);
        return tabulation(coins, amount);
    }
};