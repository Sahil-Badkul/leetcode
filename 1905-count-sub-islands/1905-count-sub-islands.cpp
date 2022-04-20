class Solution {
public:
    bool res;
    int row, col;
    void dfs(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int x, int y){
        if(x < 0 || y < 0 || x >= row || y >= col || grid2[x][y] == 0) return;
        if(grid1[x][y] == 0) {
            res = false;
            return;
        }
        grid2[x][y] = 0;
        dfs(grid1, grid2, x+1, y);
        dfs(grid1, grid2, x-1, y);
        dfs(grid1, grid2, x, y+1);
        dfs(grid1, grid2, x, y-1);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        row = grid1.size(), col = grid1[0].size();
        int cnt = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid2[i][j] == 1){
                    res = true;
                    dfs(grid1,grid2, i, j);
                    if(res) cnt++;
                }
            }
        }
        return cnt;
    }
};