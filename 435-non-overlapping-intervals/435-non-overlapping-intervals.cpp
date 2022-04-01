class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        int cnt = 0;
        int n = intervals.size();
        vector<int> prev = intervals[0];
        for(int i = 1; i < n; i++){
            if(prev[1] > intervals[i][0]){
                cnt++;
            }else{
                prev = intervals[i];
            }
        }
        return cnt;
    }
};