class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans = "", temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(temp.size())
                    st.push(temp);
                temp.clear();
            }else{
                temp += s[i];
            }
        }
        if(temp.size()) st.push(temp);
        while(st.size() > 1){
            ans += st.top() + " ";
            st.pop();
        }
        ans += st.top();
        st.pop();
        return ans;
    }
};