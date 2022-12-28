class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.size() == 0) return false;
        unordered_set<string> dict;
        for(auto &word : wordDict) dict.insert(word);
        int n = s.size();
        vector<bool> dp(n+1, false);
        dp[0] = true;
        for(int i = 1; i <= n; i++){
            for(int j = i-1; j >= 0; j--){
                if(dp[j]){
                    string word = s.substr(j, i-j);
                    if(dict.find(word) != dict.end()){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};
/*
Thought process is to stand at jth index and check weather a word form at that index, if yes mark dp[j] = true else dp[j] = false.
Similarly check for others.
We start our condition from jth index if any word must be formed there.
*/