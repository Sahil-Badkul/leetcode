class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v : matrix){
            for(auto &ele : v){
                if(ele == target) return true;
            }
        }
        return false;
    }
};