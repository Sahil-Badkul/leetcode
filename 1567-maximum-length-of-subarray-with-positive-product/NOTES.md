int getMaxLen(vector<int>& nums) {
vector<vector<int>> dp(nums.size(),vector<int>(2,0)); //stores maximum length of +ve[0] and -ve[1] seq including current index
if(nums[0]>0) dp[0][0]++;
else if(nums[0]<0) dp[0][1]++;
int re = dp[0][0];
for(int i = 1; i<nums.size();++i){
if(nums[i]!=0){
if(nums[i]>0){
dp[i][0] = 1+dp[i-1][0];
if(dp[i-1][1])
dp[i][1] = 1+dp[i-1][1];
}
else{
if(dp[i-1][1]) dp[i][0] = dp[i-1][1]+1;
dp[i][1] = dp[i-1][0]+1;
}
}
re = max(re,dp[i][0]);
}
return re;
}