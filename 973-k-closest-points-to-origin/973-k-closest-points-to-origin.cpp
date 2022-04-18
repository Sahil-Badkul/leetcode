class Solution {
public:
    float distance(int x1, int x2, int y1, int y2){
        return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float, int>> cal;
        for(int i = 0; i < points.size(); i++){
            vector<int> v = points[i];
            auto dist = distance(v[0], 0, v[1], 0);
            cal.push_back({dist, i});
        }
        sort(cal.begin(), cal.end());
        vector<vector<int>> ans;
        for(auto &x : cal){
            if(k-- == 0) break;
            int idx = x.second;
            ans.push_back(points[idx]);
        }
        return ans;
    }
};