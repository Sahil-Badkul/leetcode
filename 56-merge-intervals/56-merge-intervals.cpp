class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int n = intervals.size();
        if(n == 0) return res;
        res.push_back(intervals[0]);
        int j = 0;
        for(int i=1;i<n;i++){
            if(res[j][1] >= intervals[i][0]){
                int sn = max(res[j][1], intervals[i][1]);
                res[j][1] = sn;
            }else{
                res.push_back(intervals[i]);
                j++;
            }
        }
        return res;
    }
};