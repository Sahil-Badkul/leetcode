class Solution {
public:
    int minRefuelStops(int target, int tank, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int ans = 0, prev = 0;
        for(auto &v : stations){
            int location = v[0];
            int capacity = v[1];
            tank -= location - prev;
            while(!pq.empty() && tank < 0){ // must refuel in past
                tank += pq.top(); pq.pop();
                ans++;
            }
            if(tank < 0) return -1;
            pq.push(capacity);
            prev = location;
        }
        tank -= target - prev;
        while(!pq.empty() && tank < 0){
            tank += pq.top(); pq.pop();
            ans++;
        }
        if(tank < 0) return -1;
        return ans;
    }
};