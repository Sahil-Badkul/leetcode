class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /* 
        Approach :
            Make transpose the matrix
            Then reverse it rows
        */
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(auto &v : matrix){
            reverse(v.begin(),v.end());
        }
    }
};