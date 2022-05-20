int solve(int n){
if(dp[n]!=-1) return dp[n];
else if(n==0) return dp[0]=0;
else if(n==1 || n==2) return dp[n]=1;
else return dp[n]=solve(n-1)+solve(n-2)+solve(n-3);
}