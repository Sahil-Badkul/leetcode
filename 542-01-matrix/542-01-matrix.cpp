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
                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }
        // BFS
            while(!q.empty()){
                int i = q.front().first;
                int j = q.front().second;
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
                q.pop();
            }
        return ans;
    }
};