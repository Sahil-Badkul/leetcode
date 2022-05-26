class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
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
    }
};