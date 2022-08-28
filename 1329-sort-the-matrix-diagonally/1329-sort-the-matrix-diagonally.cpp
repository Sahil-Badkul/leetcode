class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        unordered_map<int, priority_queue<int>> map;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                map[i-j].push(-1*mat[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mat[i][j] = -1*map[i-j].top();
                map[i-j].pop();
            }
        }
        return mat;
    }
};