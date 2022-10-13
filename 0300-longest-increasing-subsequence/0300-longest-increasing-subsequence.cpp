class Solution {
public:
    int fun(int i, int prev, vector<int> &nums, vector<vector<int>> &dp){
        if(i == nums.size()) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int ans = fun(i+1, prev, nums, dp);
        if(prev == -1 or nums[i] > nums[prev]){
            ans = max(ans, 1 + fun(i+1, i, nums, dp));
        }
        return  dp[i][prev+1] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        return fun(0, -1, nums, dp);
    }
};