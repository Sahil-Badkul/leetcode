class Solution {
public:
    int mod = 1e9+7;
    int solveMem(int dice, int face, int target, vector<vector<int>> &dp){
        if(dice < 0 || target < 0) return 0;
        if(target == 0 && dice == 0) return 1;
        if(target == 0 && dice != 0) return 0;
        if(target != 0 && dice == 0) return 0;
        if(dp[dice][target] != -1) return dp[dice][target];
        int ans = 0;
        for(int i = 1; i <= face; i++){
            ans = (ans%mod + solveMem(dice-1, face, target-i, dp)%mod)%mod;
        }
        return dp[dice][target] = ans%mod;
    }
    int solveTab(int d, int face, int t){
        vector<vector<int>> dp(d+1, vector<int>(t+1, 0));
        dp[0][0] = 1;
        for(int dice = 1; dice <= d; dice++){
            for(int target = 1; target <= t; target++){
                int ans = 0;
                for(int i = 1; i <= face; i++){
                    if(target - i >= 0)
                        ans = (ans + dp[dice-1][target-i])%mod;
                }
                dp[dice][target] = ans;
            }
        }
        return dp[d][t];
    }
    int numRollsToTarget(int n, int k, int target) {
        // vector<vector<int>> dp(n+1, vector<int> (target+1, -1));
        // return solveMem(n, k, target, dp);
        return solveTab(n, k, target);
    }
};