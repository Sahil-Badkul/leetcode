class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        int total = m*n;
        if(c*r != total) return mat;
        vector<int> dumy(m*n);
        // convert 2d idx to 1d idx
        for(int i = 0; i  < m; i++){
            for(int j = 0; j < n; j++){
                dumy[n*i+j] = mat[i][j];
            }
        }
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i = 0; i < total; i++){
            ans[i/c][i%c] = dumy[i];
        }
        return ans;
    }
};