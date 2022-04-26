class Solution {
public:
    vector<int> adjList[100005];
    int dfs(int headID, vector<int> &informTime){
        int maxi = 0;
        for(int x : adjList[headID]){
            maxi = max(maxi, dfs(x, informTime));
        }
        return informTime[headID] + maxi;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i = 0; i < n; i++){
            if(manager[i] != -1){
                adjList[manager[i]].push_back(i);
            }
        }
        return dfs(headID, informTime);
    }
};