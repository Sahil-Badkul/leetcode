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
    int change(int amount, vector<int>& coins) {      
        return memoization(coins, amount);
    }
};