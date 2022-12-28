class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i < j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    void fun(int ind,string &s, vector<string> str, vector<vector<string>> &ans){
        if(ind == s.size()){
            ans.push_back(str);
            return;
        }
        for(int i = ind; i < s.size(); i++){
            if(isPalindrome(s, ind, i)){
                str.push_back(s.substr(ind, i-ind+1));
                fun(i+1, s, str, ans);
                str.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> str;
        vector<vector<string>> ans;
        fun(0, s, str, ans);
        return ans;
    }
};