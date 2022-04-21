class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int row = grid.size(), col = grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1){
                    q.push({i-1,j});
                    q.push({i+1,j});
                    q.push({i,j-1});
                    q.push({i,j+1});
                }
            }
        }
        int step = 0;
        while(!q.empty()){
            step++;
            int len = q.size();
            for(int k = 0; k < len; k++){
                int i = q.front().first, j = q.front().second;
                q.pop();
                if(i >= 0 && j >= 0 && i < row && j < col && grid[i][j] == 0){
                    grid[i][j] = step;
                    q.push({i-1,j});
                    q.push({i+1,j});
                    q.push({i,j-1});
                    q.push({i,j+1});
                }
            }
        }
        return step == 1 ? -1 : step-1;
    }
};