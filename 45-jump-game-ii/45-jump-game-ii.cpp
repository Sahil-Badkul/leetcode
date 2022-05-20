class Solution {
public:
    // memoization
    long long jump(vector<int> &nums, int curr, int dest, vector<int> &dp){
        if(curr >= dest) return 0;
        if(dp[curr] != -1) return dp[curr];
        long long int temp = INT_MAX;
        for(int i = 1; i <= nums[curr]; i++){
            if(i + curr > dest) break;
            temp = min(temp, 1 + jump(nums, curr + i, dest, dp));
        }
        dp[curr] = temp;
        return temp;
    }
    int jump(vector<int>& nums){
        vector<int> dp(nums.size(),-1);
        return jump(nums, 0, nums.size()-1, dp);
    }
    /*
    // Gready
    int jump(vector<int>& nums) {
        int curReach = 0;
        int maxReach = 0;
        int jumps = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if( i + nums[i] > maxReach){
                maxReach = i + nums[i];
            }
            if(i == curReach){
                jumps++;
                curReach = maxReach;
            }
        }
        return jumps;
    }
    */
};