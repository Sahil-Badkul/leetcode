class Solution {
public:
int helper(int idx, vector<int>&nums, vector<int>&sum, vector<int> &dp){
    if(idx == 0) return 0;
    if(idx == 1) return sum[1];
    if(dp[idx] != -1) return dp[idx];
    int pick = sum[idx] + helper(idx-2, nums, sum, dp);
    int notPick = helper(idx-1, nums, sum, dp);
    return dp[idx] = max(pick, notPick);
}
int deleteAndEarn(vector<int>& nums) {
    int n = 10001;
    
	//take the total sum by each number
    vector<int> sum(n, 0);
    // vector<int> dp(n, 0);
    
    for(auto num: nums){
        sum[num] += num;
    }
    vector<int> dp(n, -1);
    return helper(n-1, nums, sum, dp);
    /*
    // Tabulation
    dp[0] = 0;
    dp[1] = sum[1];
    //now apply the house robbing concept
    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
    }
    
    return dp[n-1];
    */
    /*
    // space optimization
    int prev2 = 0;
    int prev = sum[1];
    for(int i = 2; i < n; i++){
        int curr = max(sum[i]+prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    return max(prev2, prev);
    */
}
};