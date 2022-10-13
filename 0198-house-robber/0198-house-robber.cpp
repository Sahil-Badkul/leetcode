class Solution {
public:
    int fun(int i, vector<int> &nums, vector<int> &dp){
        if(i >= nums.size()){
            return 0;
        }
        if(dp[i] != -1) return dp[i];
        int pick = nums[i] + fun(i+2, nums, dp);
        int notPick = fun(i+1, nums, dp);
        return dp[i] = max(pick, notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        int fs = fun(0, nums, dp);
        int sn = 0;
        if(n > 1){
            sn = fun(1, nums, dp);
        }
        return max(fs, sn);
    }
};