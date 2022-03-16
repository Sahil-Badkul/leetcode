class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> mat(n);
        for(int i = 0; i < n; i++){
            mat[i].resize(i+1);
            mat[i][0] = mat[i][i] = 1;
            for(int j = 1; j < i; j++){
                mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
            }
        }
        return mat;
    }
};