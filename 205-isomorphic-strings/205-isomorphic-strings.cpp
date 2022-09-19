class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp, up;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(mp.find(ch) == mp.end() && up.find(t[i]) == up.end()){
                mp[ch] = t[i];
                up[t[i]] = ch;
            }else{
                if(mp[ch] != t[i] || up[t[i]] != ch) return false;
            }
        }
        return true;
    }
};