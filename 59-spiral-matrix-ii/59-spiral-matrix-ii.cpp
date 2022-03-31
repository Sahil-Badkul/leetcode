class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int> (n));
        int num = 1;
        for(int i = 0; i < (n+1)/2; i++){
            // direction 1 - traverse left to right.
            for(int j = i; j < n-i; j++){
                res[i][j] = num++;
            }
            // direction 2 - traverse top to bottom.
            for(int k = i+1; k < n - i; k++){
                res[k][n-i-1] = num++;
            }
            // direction 3 - traverse right to left.
            for(int l = n-i-2; l >= i; l--){
                res[n-i-1][l] = num++;
            }
            // direction 4 - traverse bottom to up.
            for(int m = n-i-2; m > i; m--){
                res[m][i] = num++;
            }        
        }
        return res;
    }
};