class Solution {
public:
    bool checkPossible(string &s1, string &s2){
        if(s1.size() != s2.size() + 1) return false;
        int first = 0;
        int sec = 0;
        while(first < s1.size()){
            if(s1[first] == s2[sec]){
                first++, sec++;
            }else{
                first++;
            }
        }
        if(first == s1.size() && sec == s2.size()) return true;
        return false;
    }
    static bool comp(string &s1, string &s2){
        return s1.size() < s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        vector<int> dp(n, 1);
        sort(words.begin(), words.end(), comp);
        int maxi = 1;
        for(int i = 0; i < n; i++){
            for(int prev = 0; prev < i; prev++){
                if(checkPossible(words[i], words[prev]) && dp[prev] + 1 > dp[i]){
                    dp[i] = dp[prev] + 1;
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};