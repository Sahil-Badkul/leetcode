class Solution {
public:
    int memo(int i, int target, vector<int> &nums, vector<vector<int>> &dp){
        if(i == nums.size() || target == 0){
            return target == 0;
        }
        if(dp[i][target] != -1) return dp[i][target];
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (target >= nums[i]) {
                res += memo(i, target - nums[i], nums, dp);
            }
        }
        return dp[i][target] = res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));
        return memo(0, target, nums, dp);
    }
};