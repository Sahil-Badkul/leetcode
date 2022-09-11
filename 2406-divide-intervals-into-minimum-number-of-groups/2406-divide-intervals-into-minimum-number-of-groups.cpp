class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
       priority_queue<int,  vector<int>, greater<int>> pq;
       for(auto &v : intervals){
           if(!pq.empty() && pq.top() < v[0]){
               pq.pop();
           }
           pq.push(v[1]);
       }
       return pq.size();
    }
};