class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> word;
        stringstream ss(s);
        string t;
        while(ss >> t){
            word.push_back(t);
        }
        int n = pattern.size(), m = word.size();
        if(n != m) 
            return false;
        unordered_map<char, string> pat;
        unordered_map<string, char> match;
        for(int i = 0; i < n; i++){
            char p = pattern[i];
            string str = word[i];
            if(pat.find(p) == pat.end() && match.find(str) == match.end()){
                pat[p] = str;
                match[str] = p;
            }else if(pat[p] != str || match[str] != p) 
                return false;
        }
        return true;
    }
};