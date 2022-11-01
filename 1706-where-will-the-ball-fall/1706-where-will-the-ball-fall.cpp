class Solution {
public:
    int dfs(int i, int j, vector<vector<int>> &grid){
        if(i >= grid.size()){
            return j;
        }else if(grid[i][j] == 1 && j+1 < grid[0].size() && grid[i][j+1] == 1){
            return dfs(i+1, j+1, grid);
        }else if(grid[i][j] == -1 && j-1 >= 0 && grid[i][j-1] == -1){
            return dfs(i+1, j-1, grid);
        }else if(grid[i][j] == 1 && j+1 >= grid[0].size()){
            return -1;
        }else{
            return -1;
        }
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> res(m, -1);
        for(int i = 0; i < m; i++){
            res[i] = dfs(0, i, grid);
        }
        return res;
    }
};