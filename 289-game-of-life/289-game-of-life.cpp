class Solution {
public:
    bool isValid(int x, int y, vector<vector<int>> &board){
        return (x >= 0 && x < board.size() && y >= 0 && y < board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx = {0,0,1,1,1,-1,-1,-1};
        vector<int> dy = {1,-1,1,-1,0,0,1,-1};
        for(int row = 0; row < board.size(); row++){
            for(int col = 0; col < board[0].size(); col++){
                int cntOnes = 0;
                for(int i = 0; i < 8; i++){
                    int cur_x = row + dx[i],  cur_y = col + dy[i];
                    if(isValid(cur_x, cur_y, board) && abs(board[cur_x][cur_y]) == 1){
                        cntOnes++;
                    }
                }
                if(board[row][col] == 1 && (cntOnes < 2 || cntOnes > 3)){
                    board[row][col] = -1;
                }
                if(board[row][col] == 0 && cntOnes == 3){
                    board[row][col] = 2;
                }
            }
        }
        for(int row = 0; row < board.size(); row++){
            for(int col = 0; col < board[0].size(); col++){
                if(board[row][col] >= 1){
                    board[row][col] = 1;
                }else{
                    board[row][col] = 0;
                }
            }
        }
    }
};