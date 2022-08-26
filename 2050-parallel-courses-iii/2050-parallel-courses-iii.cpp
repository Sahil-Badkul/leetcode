class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        unordered_map<int,list<int>> adj;
        vector<int> indegree(n, 0);
        vector<int> maxTime(time.begin(), time.end());
        queue<int> q;
        for(auto &ar : relations){
            int u = ar[0]-1;
            int v = ar[1]-1;
            adj[u].push_back(v);
            indegree[v]++;
        }
        for(int i = 0; i < n; i++) if(indegree[i] == 0) q.push(i);
        while(!q.empty()){
            int len = q.size();
            for(int i = 0; i < len; i++){
                int front = q.front(); q.pop();
                for(auto &v : adj[front]){
                    indegree[v]--;
                    if(indegree[v] == 0) q.push(v);
                    maxTime[v] = max(maxTime[v], maxTime[front] + time[v]);
                }
            }
        }
        int ans = *max_element(maxTime.begin(), maxTime.end());
        return ans;
    }
};