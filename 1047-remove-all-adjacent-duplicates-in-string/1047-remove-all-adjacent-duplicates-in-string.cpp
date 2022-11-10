class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(str.size() > 0 && str.back() == s[i]){
                str.pop_back();
            }else{
                str.push_back(s[i]);
            }
        }
        return str;
    }
};