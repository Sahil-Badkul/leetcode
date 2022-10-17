class Solution {
public:
    int dp[301][11];
    int solve(vector<int> &jobd, int n, int i, int d){
        if(d == 1){
            return *max_element(jobd.begin()+i, jobd.end());
        }
        if(dp[i][d] != -1) return dp[i][d];
        int res = INT_MAX;
        int currD = INT_MIN;
        for(int j = i; j <= n-d; j++){
            currD = max(currD, jobd[j]);
            res = min(res, currD + solve(jobd, n, j+1, d-1));
        }
        return dp[i][d] =  res;
    }
    int minDifficulty(vector<int>& jd, int d) {
        memset(dp, -1, sizeof(dp));
        int n = jd.size();
        if(n < d) return -1;
        return solve(jd, n, 0, d);
    }
};