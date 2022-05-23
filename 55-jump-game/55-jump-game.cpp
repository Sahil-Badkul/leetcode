class Solution {
public:
    // linear
    bool linear(vector<int> &nums){
        int reachable = 0;
        for(int i = 0; i < nums.size(); i++){
            // if reachable become less in some point then we return false.
            if(reachable < i){
                return false;
            }
            reachable = max(reachable, i + nums[i]);
        }
        return true;
    }
    // memo
    bool memo(int idx, vector<int> &nums, vector<int> &dp){
        if(idx == nums.size()-1) return true;
        if(dp[idx] != -1) return dp[idx];
        int reachable = idx + nums[idx];
        for(int i = idx+1; i <= reachable; i++){
            if(memo(i, nums, dp)){
                return dp[i] = true;
            }
        }
        return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {        
        vector<int> dp(nums.size(), -1);
        return memo(0, nums, dp);
    }
};
/*
2 3 1 1 4 
n = 5
reachable = 0 2 4
i = 0, 1, 2, 3, 4
*/