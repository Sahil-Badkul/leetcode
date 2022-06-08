class Solution {
public:
    int lastStoneWeightII(vector<int>& arr) {
        int n = arr.size();
        int totSum = 0;
        for(auto &x : arr) totSum += x;    
        vector<vector<bool>> dp(n, vector<bool> (totSum + 1, false));
        for (int i = 0; i < n; i++) {
             dp[i][0] = true;
        }
        if (arr[0] <= totSum)
            dp[0][totSum] = true;

        for(int i = 1; i < n; i++){
            for(int j = 1; j <= totSum; j++){
                // pick n not pick
                bool notPick = dp[i-1][j];
                bool pick = false;
                if(arr[i] <= j){
                    pick = dp[i-1][j-arr[i]];
                }
                dp[i][j] = pick || notPick;
            }
        }
        int mini = 1e9;
        for(int s1 = 0; s1 <= totSum; s1++){
            if(dp[n-1][s1] == true){
                mini = min(mini, abs((totSum - s1) - s1));
            }
        }
        return mini;
    }
};