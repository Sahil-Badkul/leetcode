class Solution {
public:
    unordered_map<string, bool> um;
    bool isScramble(string s1, string s2) {
        if(s1.compare(s2) == 0)
            return true;
        if(s1.size() <= 1)
            return false;
        string key = s1;
        key.push_back(' ');
        key.append(s2) ;
        if(um.find(key) != um.end())
            return um[key];
        int n = s1.size();
        bool flag = false;
        for(int i = 1; i < n; i++){
            bool swap = isScramble(s1.substr(0, i), s2.substr(n-i, i)) &&  isScramble(s1.substr(i, n-i), s2.substr(0, n-i));
            bool notSwap =  isScramble(s1.substr(0, i), s2.substr(0, i)) &&  isScramble(s1.substr(i, n-i), s2.substr(i, n-i));
            if(swap or notSwap){
                flag = true;
                break;
            }
                                   
        }
        return um[key] = flag;
    }
};