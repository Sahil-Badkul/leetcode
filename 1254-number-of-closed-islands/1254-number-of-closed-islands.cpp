class Solution {
public:
    bool dfs(vector<vector<int>> &grid, int x,int y){  
        // if visited return true
        if(grid[x][y] == 1) return true;
        // base cases of boundaries
        if(x <= 0 || y <= 0 || x >= grid.size()-1 || y >= grid[0].size()-1) return false; 
        // marked visited
        grid[x][y] = 1;
        // all direction
        bool left = dfs(grid, x-1, y);
        bool right = dfs(grid, x+1, y);
        bool top = dfs(grid, x, y+1);
        bool bottom = dfs(grid, x, y-1);
        return (left && right && top && bottom);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int island = 0;
        // Ignoring corners
        for(int i = 1; i < row-1; i++){
            for(int j = 1; j < col-1; j++){
                if(grid[i][j] == 0 && dfs(grid, i, j)){
                    island++;
                }
            }
        }
        return island;
    }
};