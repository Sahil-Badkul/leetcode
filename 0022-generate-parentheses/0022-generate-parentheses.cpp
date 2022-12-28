class Solution {
public:
    void fun(int open, int close, vector<string> &ans, string str){
        if(open == 0){
            for(int i = close; i > 0; i--) str.push_back(')');
            ans.push_back(str);
            return;
        }
        if(close == 0) return;
        if(close > open){
            fun(open, close-1, ans, str + ")");
        }
        fun(open-1, close, ans, str + "(");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        fun(n, n, ans, str);
        return ans;
    }
};