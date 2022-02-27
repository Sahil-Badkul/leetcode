class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = pref.size();
        int cnt = 0;
        for(auto &word : words){
            if(word.substr(0,len) == pref) cnt++;
        }
        return cnt;
    }
};