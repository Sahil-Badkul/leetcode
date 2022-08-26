class Solution {
public:
    void topoSort(int node, stack<int> &st, vector<int> &vis, unordered_map<int, list<int>> &adj){
        vis[node] = 1;
        for(auto &nbr : adj[node]){
            if(!vis[nbr]){
                topoSort(nbr, st, vis, adj);
            }
        }
        st.push(node);
    }
    int longestPath(unordered_map<int, list<int>> &adj, vector<int> &topo,vector<int>& time){
        // dist vector
        int n = topo.size();
        vector<int> dist(n, 0);
        for(int i = 0; i < n; i++) dist[i] = time[i];
        for(int i = 0; i < n; i++){
            int u = topo[i];
            for(int &v : adj[u]){
                if(dist[v] < time[v] + dist[u]){
                    dist[v] = time[v] + dist[u];
                }
            }
        }
        int longest = *max_element(dist.begin(), dist.end());
        return longest;
    }
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        // create adj list
        unordered_map<int, list<int>> adj;
        for(auto &arr : relations){
            int u = arr[0]-1;
            int v = arr[1]-1;
            adj[u].push_back(v);
        }
        // create topo sort;
        vector<int> topo;
        stack<int> st;
        vector<int> visited(n, 0);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                topoSort(i, st, visited, adj);
            }
        }
        while(!st.empty()){
            topo.push_back(st.top()); st.pop();
        }
        return longestPath(adj, topo, time);
    }
};