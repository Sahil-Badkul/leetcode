class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.size() == 0) return 0;
        int cnt = 0;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push('(');
            }else{
                if(st.empty()){
                    cnt++;
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            cnt++;
            st.pop();
        }
        return cnt;
    }
};