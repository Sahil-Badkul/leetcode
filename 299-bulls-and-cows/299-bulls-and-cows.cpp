class Solution {
public:
    string getHint(string s, string g) {
        int se[10] = {0}, gr[10] = {0};
        int bull = 0, cow = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == g[i]) bull++;
            se[s[i] - '0']++;
            gr[g[i] - '0']++;
        }
        for(int i = 0; i < 10; i++) cow += min(se[i], gr[i]);
        cow -= bull;
        string ans = to_string(bull) + "A" + to_string(cow) + "B";
        return ans;
    }
};
