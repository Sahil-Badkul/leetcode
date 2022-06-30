typedef long long ll;
class Solution {
public:
     int memo(int ind, int T, vector<ll>&num, vector<vector<ll>> &dp){
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
    int memoization(vector<ll> &num, int x)
    {
        int n = num.size();
        vector<vector<ll>> dp(n, vector<ll> (x+1, -1));
        int ans = memo(n-1, x, num, dp);
        if(ans >= 1e9) return -1;
        return ans;
    }
    int numSquares(int n) {
        vector<ll> sq;
        ll i = 1;
        while(i*i <= n){
            sq.push_back(i*i);
            i++;
        }
        return memoization(sq, n);
    }
};