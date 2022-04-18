class Solution {
public:
    int distance(int x,int y){
        return x*x + y*y;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> cal;
        for(int i = 0; i < points.size(); i++){
            pair<int,int> point = {distance(points[i][0],points[i][1]), i};
            if(cal.size() < k){
                cal.push(point);
            }else if(point.first < cal.top().first){
                cal.pop();
                cal.push(point);
            }
        }
        vector<vector<int>> ans;
        while(!cal.empty()){
            int idx = cal.top().second;
            cal.pop();
            ans.push_back(points[idx]);
        }
        return ans;
    }
    //TC : 
};