class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int lo = 0, hi = row*col-1, mid,val;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            val = matrix[mid/col][mid%col];
            if(val == target){
                return true;
            }else if(val < target){
                lo = mid + 1;
            }else{
                hi = mid-1;
            }
        }
        return false;
    }
};