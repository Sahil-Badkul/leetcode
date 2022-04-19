class Solution {
public:
int row, col;
bool dfs(vector<vector<int>> &grid, int i, int j){
if(grid[i][j])
return true;
if(i <= 0 || i >= row-1 || j <= 0 || j >= col-1)
return false;
grid[i][j] = 1;
bool left = dfs(grid, i, j-1);
bool right = dfs(grid, i, j+1);
bool up = dfs(grid, i-1, j);
bool down = dfs(grid, i+1, j);
return (left&&right&&up&&down);
}
int closedIsland(vector<vector<int>>& grid) {
row = grid.size(), col = grid[0].size();
int ans=0;
for(int i=1; i<row-1; ++i)
for(int j=1; j<col-1; ++j)
if(grid[i][j] == 0 and dfs(grid, i, j))
++ans;
return ans;
}
};