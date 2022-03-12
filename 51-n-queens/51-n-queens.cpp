class Solution {
public:
    vector<vector<string>> ans;
     bool isSafe(vector<string> &board, int row, int col){
        //column check
        for(int i = 0; i<board.size(); ++i){
            if(board[i][col] == 'Q'){return false;}
        }
        int x = row; int y = col;
		
        //checking for upper left diagonal(non-main diagonal), row is decreasing and col too
        while(x>=0 && y>=0){
            if(board[x][y] == 'Q'){return false;}
            --x;  --y; 
        }
        
         //checking for main diagonal(upper right), row is decreasing and col increasing
        while(row>=0 && col<board.size()){
            if(board[row][col] == 'Q'){return false;}
            --row; ++col;
        }
        
        //The fn didn't returned false till , implies that our position is safe to place the queen
        return true;
    }
     void placeQueen(vector<string> &board, int row){
         if(row == board.size()){
             ans.push_back(board);
             return;
         }
         for(int col = 0; col < board.size(); col++){
             if(isSafe(board, row, col)){
                 board[row][col] = 'Q';
                 placeQueen(board, row+1);
                 board[row][col] = '.';
             }
         }
     }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        placeQueen(board, 0);
        return ans;
    }
};