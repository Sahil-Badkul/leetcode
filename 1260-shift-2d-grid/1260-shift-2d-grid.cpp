class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row, vector<int>(col,0));
        for(int i = 0; i < row*col; i++){
            int old_x = i % col;
            int old_y = i / col;
            int new_x = (old_x + k) % col;
            int new_y = (old_y + (old_x + k) / col) % row;
            ans[new_y][new_x] = grid[old_y][old_x];
        }
        return ans;
    }
};