class Solution {
public:
    /*
    // Naive approach
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v : matrix){
            for(auto &ele : v){
                if(ele == target) return true;
            }
        }
        return false;
    }
    */
    // Better approach
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix[0].size();
        int row = 0, col = m-1;
        while(row < matrix.size() && col >= 0){
            if(matrix[row][col] == target) return true;
            matrix[row][col] < target ? row++ : col--;
        }
        return false;
    }
};