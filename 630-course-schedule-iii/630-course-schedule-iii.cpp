class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return (a[1] < b[1]);
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), comp);
        priority_queue<int> pq;
        int total = 0;
        // int cnt = 0;
        for(auto &v : courses){
            if(total + v[0] <= v[1]){
                pq.push(v[0]);
                total += v[0];
                // cnt++;
            }else if(pq.size() && pq.top() > v[0]){
                total -= pq.top();
                pq.pop();
                total += v[0];
                pq.push(v[0]);
            }
        }
        return pq.size();
    }
};