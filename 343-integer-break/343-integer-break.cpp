class Solution {
public:
    int unboundedKnapsack(int num,int target, vector<int> &v, vector<vector<int>> &dp){
        if(num == 0){
            if(target == 0) return 1;
            return 0;
        }
        if(dp[num][target] != -1) return dp[num][target];
        // Valid
        if(v[num-1] <= target){
            int pick = v[num-1] * unboundedKnapsack(num, target-v[num-1], v, dp);
            int notPick = unboundedKnapsack(num-1, target, v, dp);
            return dp[num][target] = max(pick, notPick);
        }
        // Not valid
        return dp[num][target] = unboundedKnapsack(num-1, target, v, dp);
    }

    int integerBreak(int n) {
        vector<int> v;  // For storing 1,2...n
        for(int i = 1; i < n; i++){
            v.push_back(i);
        }
        vector<vector<int>> dp(59, vector<int>(59,-1));
        return unboundedKnapsack(n-1, n, v, dp);
    }
};