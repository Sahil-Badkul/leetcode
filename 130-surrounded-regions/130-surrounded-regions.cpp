class Solution {
public:
    void dfs(int i, int j, int n, int m,vector<vector<char>> &arr){
        if(i < 0 || j < 0 || i >= n || j >= m || arr[i][j] != 'O') return;
        arr[i][j] = '#';
        dfs(i+1, j, n, m, arr);
        dfs(i-1, j, n, m, arr);
        dfs(i, j+1, n, m, arr);
        dfs(i, j-1, n, m, arr);
    }
    void solve(vector<vector<char>>& arr) {
        int n = arr.size(), m = arr[0].size();
        if(n == 0) return;
        // moving col.
        for(int i = 0; i < n; i++){
            if(arr[i][0] == 'O'){
                dfs(i,0,n,m,arr);
            }
            if(arr[i][m-1] == 'O'){
                dfs(i, m-1, n, m, arr);
            }
        }
        // moving row
        for(int j = 0; j < m; j++){
            if(arr[0][j] == 'O'){
                dfs(0,j,n,m,arr);
            }
            if(arr[n-1][j] == 'O'){
                dfs(n-1,j,n,m,arr);
            }
        }
        // calculate
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 'O'){
                    arr[i][j] = 'X';
                }else if(arr[i][j] == '#'){
                    arr[i][j] = 'O';
                }
            }
        }
    }
};