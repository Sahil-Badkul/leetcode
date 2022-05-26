class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int score = INT_MIN, n = values.size();
        int dp[n];
        dp[0] = values[0];
        for(int i = 1; i < n; i++){
            score = max(score, dp[i-1]+values[i]-i);
            dp[i] = max(dp[i-1],values[i]+i);
        }
        return score;
        /*
        // A[i]+i + A[j]-j 
        int prevBestIdx = 0;
        int ans = values[0];
        for(int j = 1; j < values.size(); j++){
            int prev = values[prevBestIdx] + prevBestIdx;
            int curr = values[j] - j;
            ans = max(ans, prev + curr);
            if(prev < values[j] + j){
                prevBestIdx = j;
            }
        }
        return ans;
        */
    }
};