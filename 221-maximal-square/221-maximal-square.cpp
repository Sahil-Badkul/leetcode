class Solution {
public:
   int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(!n) return 0;
        int m=matrix[0].size(),sz=0;
        vector<vector<int> > dp(n, vector<int>(m, 0));
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                if(i==0 || j==0) dp[i][j]=matrix[i][j]-'0';                     //for first Row & Col
                else if(matrix[i][j]=='1') dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + 1;
                sz = max(sz, dp[i][j]);
            }
        }
        return sz*sz;
    }
};