class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans = "";
        int n = s.size();
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(c >= 'a' and c <= 'z'){
                ans += c;
            }else if(c == '('){
                st.push(c);
                ans += c;
            }else if(c == ')'){
                if(st.empty()) continue;
                ans += c;
                st.pop();
            }
        }
        int j = ans.size()-1;
        while(!st.empty()){
            while(j >= 0 and ans[j] != '(') j--;
            ans = ans.substr(0, j) + ans.substr(j+1, ans.size());
            st.pop();
        }
        return ans;
    }
};