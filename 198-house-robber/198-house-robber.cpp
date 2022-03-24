class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(nums, dp, 0);
    }
    int helper(vector<int> &nums, vector<int> &dp, int i){
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(helper(nums,dp,i+1), nums[i]+helper(nums,dp,i+2));
    }
};