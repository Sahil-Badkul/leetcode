class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort the interva according to there end time.
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        int cnt = 0;
        int n = intervals.size();
        // prev for maintaining intervals
        vector<int> prev = intervals[0];
        for(int i = 1; i < n; i++){
            // if prev ka end is greater than curr intervals ke start se means they are overlapped increase cnt.
            if(prev[1] > intervals[i][0]){
                cnt++;
            }else{
                // varna prev will become curr intervals.
                prev = intervals[i];
            }
        }
        return cnt;
    }
};