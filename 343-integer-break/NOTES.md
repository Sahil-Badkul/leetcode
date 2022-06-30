int dp[59][59];
int unBoundedKnapsack(int n,int amount,vector<int> v){
if(n==0){
if(amount==0){
return 1;
}
return 0;
}
if(dp[n][amount]!=-1){
return dp[n][amount];
}
if(v[n-1]<=amount){
return dp[n][amount] = max(v[n-1]*unBoundedKnapsack(n,amount-v[n-1],v) , unBoundedKnapsack(n-1,amount,v));
}
else{
return dp[n][amount] = unBoundedKnapsack(n-1,amount,v);
}
}
int integerBreak(int n) {
vector<int> v;
for(int i=1;i<n;i++){
v.push_back(i);
}
memset(dp,-1,sizeof(dp));
return unBoundedKnapsack(v.size(),n,v);
}