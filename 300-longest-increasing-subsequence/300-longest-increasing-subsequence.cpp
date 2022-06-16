class Solution {
public:
    int memo(int ind, int prev_ind, vector<int> &nums, vector<vector<int>> &dp){
        if(ind == nums.size()) return 0;
        if(dp[ind][prev_ind+1] != -1) return dp[ind][prev_ind+1];
        int len = 0 + memo(ind+1, prev_ind, nums, dp);
        if(prev_ind == -1 || nums[ind] > nums[prev_ind]){
            len = max(len, 1 + memo(ind+1, ind, nums, dp));
        }
        return dp[ind][prev_ind+1] = len;
    }
    int memoization(vector<int> &nums){ 
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n+1, -1));
        return memo(0, -1, nums, dp);
    }
    int tabulation(vector<int> &nums){
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        for(int ind = n-1; ind >= 0; ind--){
            for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--){
                int len = 0 + dp[ind+1][prev_ind+1];
                if(prev_ind == -1 || nums[ind] > nums[prev_ind]){
                    len = max(len, 1 + dp[ind+1][ind+1]);
                }
                dp[ind][prev_ind+1] = len;
            }
        }
        return dp[0][-1+1];
    }
    int lengthOfLIS(vector<int>& nums) {
        // return memoization(nums);
        return tabulation(nums);
    }
};