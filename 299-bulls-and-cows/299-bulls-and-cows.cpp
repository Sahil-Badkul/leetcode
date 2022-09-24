class Solution {
public:
    string getHint(string s, string g) {
        int se[256] = {0}, gr[256] = {0};
        int bull = 0, cow = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == g[i]) bull++;
            se[s[i]]++;
        }
        for(int i = 0; i < g.size(); i++) gr[g[i]]++;
        for(int i = 0; i < 256; i++) cow += min(se[i], gr[i]);
        cow -= bull;
        string ans = to_string(bull) + "A" + to_string(cow) + "B";
        return ans;
    }
};
