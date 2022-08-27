class Solution {
public:
    int ar[101][101], pf[101][101];
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = INT_MIN;
        int temp = 0;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                pf[i][j] = matrix[i-1][j-1] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
                temp = matrix[i-1][j-1];
                // cout<<temp<<" ";
                if(temp > ans && temp <= k){
                    ans = max(temp, ans);
                }
            }
            // cout<<endl;
        }
        for(int a = 1; a <= m; a++){
            for(int b = 1; b <= n; b++){
                for(int c = a; c <= m; c++){
                    for(int d = b; d <= n; d++){
                        temp  = pf[c][d]  - pf[a-1][d]  - pf[c][b-1] + pf[a-1][b-1];
                        // cout<<temp<<" ";
                        if(temp > ans && temp <= k){
                            ans = temp;
                        }
                    }
                    // cout<<endl;
                }
            }
        }
        return ans;
    }
};