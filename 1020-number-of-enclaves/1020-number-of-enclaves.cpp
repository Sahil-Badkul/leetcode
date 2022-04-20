class Solution {
public:
    void dfs(vector<vector<int>> &grid, int x, int y){
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0) return;
        grid[x][y] = 0;
        dfs(grid, x+1, y);
        dfs(grid, x-1, y);
        dfs(grid, x, y+1);
        dfs(grid, x, y-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        // Approach : mark all grid cell which are on boundaries and access throught boundries
        int row = grid.size(), col = grid[0].size();
        // marking left and right boundries
        for(int i = 0; i < row; i++){
            if(grid[i][0] == 1){
                dfs(grid, i, 0);
            }
            if(grid[i][col-1] == 1){
                dfs(grid, i, col-1);
            }
        }
        // making top and bottom boundries.
        for(int j = 0; j < col; j++){
            if(grid[0][j] == 1){
                dfs(grid, 0, j);
            }
            if(grid[row-1][j] == 1){
                dfs(grid, row-1, j);
            }
        }
        int cnt = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1) cnt++;
            }
        }
        return cnt;
    }
};