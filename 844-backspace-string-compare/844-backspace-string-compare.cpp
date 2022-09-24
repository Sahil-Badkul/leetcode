class Solution {
public:
    void build(string &s, stack<char> &sst){
        for(int i = 0; i < s.size(); i++){
            if(sst.size() > 0 && s[i] == '#'){
                sst.pop();
            }else if(s[i] != '#'){
                sst.push(s[i]);
            }
        }
    }
    bool backspaceCompare(string s, string t) {
        stack<char> sst, tst; 
        build(s, sst);
        build(t, tst);
        if(sst.size() != tst.size()) return false;
        while(!sst.empty()){
            if(sst.top() != tst.top()) return false;
            sst.pop();
            tst.pop();
        }
        return true;
    }
};