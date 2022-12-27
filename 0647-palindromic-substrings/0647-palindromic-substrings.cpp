class Solution {
public:
    int dp[1001][1001];
    bool isPalindrome(string &s, int i, int j){
        if(i >= j) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] != s[j]) return 0;
        return dp[i][j] = isPalindrome(s, i+1, j-1);
    }
    int countSubstrings(string s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(isPalindrome(s, i, j))  cnt += 1;
            }
        }
        return cnt;
    }
};