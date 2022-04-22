class Solution {
public:
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        if(row == 0) return {};
        int col = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(col, -1));
        queue<pair<int,int>> q;
        // push all 0's idx in queue and update it as 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            auto point = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){
                int x = point.first +  dx[i];
                int y = point.second + dy[i];
                // is valid  --> ans[x][y] != -1 then it contain shortest path. mat[x][y] == 1 bcaz we are considering 1's only.
                if(x >= 0 && y >= 0 && x < row && y < col && ans[x][y] == -1 && mat[x][y] == 1){
                    ans[x][y] = ans[point.first][point.second] + 1;
                    q.push({x,y});
                }
            }
        }
        return ans;
    }
};
/*
class Solution {
public:
    bool isvalid(int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= n || j >= m) return false;
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.size() == 0) return mat;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m,-1));
        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    // We are push pair of indexes.
                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }
        // BFS
            while(!q.empty()){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                if(isvalid(i+1,j,m,n) && ans[i+1][j] == -1){
                    q.push({i+1,j});
                    ans[i+1][j] = ans[i][j] + 1;
                }
                if(isvalid(i-1,j,m,n) && ans[i-1][j] == -1){
                    q.push({i-1,j});
                    ans[i-1][j] = ans[i][j] + 1;
                }
                if(isvalid(i,j+1,m,n) && ans[i][j+1] == -1){
                    q.push({i,j+1});
                    ans[i][j+1] = ans[i][j] + 1;
                }
                if(isvalid(i,j-1,m,n) && ans[i][j-1] == -1){
                    q.push({i,j-1});
                    ans[i][j-1] = ans[i][j] + 1;
                }
            }
        return ans;
    }
};
*/