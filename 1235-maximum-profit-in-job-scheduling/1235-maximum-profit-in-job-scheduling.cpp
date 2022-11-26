class Solution {
public:
    static bool comp(vector<int> &a, vector<int>& b){
        return a[1] < b[1];
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = profit.size();
        vector<vector<int>> arr(n);
        for(int i = 0; i < n; i++){
            int x = startTime[i];
            int y = endTime[i];
            int z = profit[i];
            arr[i] = {x, y, z};
        }
        sort(arr.begin(), arr.end(), comp);
        int dp[n];
        dp[0] = arr[0][2];
        for(int i = 1; i < n; i++){
            int inc = arr[i][2];
            int low = 0;
            int high = i-1;
            int last = -1;
            while(low <= high){
                int mid = low + (high-low)/2;
                if(arr[mid][1] <= arr[i][0]){
                    last = mid;
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            if(last != -1){
                inc += dp[last];
            }
            int exc = dp[i-1];
            dp[i] = max(inc, exc);
        }
        return dp[n-1];
    }
};