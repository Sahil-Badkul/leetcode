class Solution {
public:
int deleteAndEarn(vector<int>& nums) {
    int n = 10001;
    
	//take the total sum by each number
    vector<int> sum(n, 0);
    // vector<int> dp(n, 0);
    
    for(auto num: nums){
        sum[num] += num;
    }
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
    // space optimization
    int prev2 = 0;
    int prev = sum[1];
    for(int i = 2; i < n; i++){
        int curr = max(sum[i]+prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    return max(prev2, prev);
}
};