class Solution {
public:
    void dfs(int src, int dest, vector<int> &curr, vector<vector<int>> &graph, vector<vector<int>> &ans){
        if(src == dest){
            ans.push_back(curr);
            return;
        }
        for(auto &ele : graph[src]){
            curr.push_back(ele);
            dfs(ele, dest, curr, graph, ans);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> curr;
        curr.push_back(0);  // source
        dfs(0, graph.size()-1, curr, graph, ans);
        return ans;        
    }
};