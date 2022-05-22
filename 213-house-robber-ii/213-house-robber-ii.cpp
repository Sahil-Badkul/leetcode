class Solution {
public:
    int helper(int idx, vector<int> &nums, vector<int> &dp){
        if(dp[idx] != -1) return dp[idx];
        if(idx == 0) return nums[idx];
        int pick = nums[idx] + (idx > 1 ? helper(idx-2, nums, dp) : 0);
        int nonPick = helper(idx-1, nums, dp);
        return dp[idx] = max(pick, nonPick);
    }
    void reset(vector<int> &dp){
        for(auto &x : dp) x = -1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> nums1, nums2;
        for(int i = 0; i < n-1; i++){
            nums1.push_back(nums[i]);
        }
        for(int i = 1; i < n; i++){
            nums2.push_back(nums[i]);
        }
        vector<int> dp(n, -1);
        int one = helper(nums1.size()-1, nums1, dp);
        reset(dp);
        int two = helper(nums2.size()-1, nums2, dp);
        return max(one, two);
    }
};