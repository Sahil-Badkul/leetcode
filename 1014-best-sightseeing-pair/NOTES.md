int score=INT_MIN,n=values.size();
int dp[n];
dp[0]=values[0];
for(int i=1;i<n;i++){
score=max(score,dp[i-1]+values[i]-i);
dp[i] = max(dp[i-1],values[i]+i);
}
return score;