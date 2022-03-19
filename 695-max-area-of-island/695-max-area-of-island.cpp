class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c, int &area,vector<vector<bool>> &seen){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || seen[r][c] || grid[r][c] == 0) return 0;
        seen[r][c] = 1;
        int left = dfs(grid,r-1,c, area, seen);
        int up = dfs(grid, r,c-1, area, seen);
        int right = dfs(grid, r+1,c, area, seen);
        int down = dfs(grid, r,c+1, area, seen);
        return (1 + left + up + right + down);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int maxArea = 0;
        vector<vector<bool>> seen(r,vector<bool>(c,0));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                int area = dfs(grid, i, j, area, seen);
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};