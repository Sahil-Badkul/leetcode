class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> hsh_s(26,0), hsh_t(26,0);
        for(auto &w : s){
            hsh_s[w-'a']++;
        }
        for(auto &w : t){
            hsh_t[w-'a']++;
        }
        int step = 0;
        for(int i = 0; i < 26; i++){
            step += abs(hsh_s[i] - hsh_t[i]);
        }
        return step;
    }
};