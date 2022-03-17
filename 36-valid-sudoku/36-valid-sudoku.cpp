class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int colUsed[9][9] = {0}, rowUsed[9][9] = {0}, boxUsed[9][9] = {0};
        for(int col = 0; col < 9; col++){
            for(int row = 0; row < 9; row++){
                char ch = board[col][row];
                if(ch != '.'){
                    int num = ch - '0' - 1;
                    int box = (col/3)*3 + (row/3);
                    if(colUsed[col][num] or rowUsed[row][num] or boxUsed[box][num]){
                        return false;
                    }
                    colUsed[col][num] = rowUsed[row][num] = boxUsed[box][num] = 1;
                }
            }
        }
        return true;
    }
};