class Solution {
public:
    string repeat(string &s, int num){
        string temp = "";
        while(num--) temp += s;
        return temp;
    }
    string decodeString(string s) {
        stack<string> st;
        string prevStr = "", curr = "";
        int cnum = 0, prevNum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '['){
                st.push(to_string(cnum));
                st.push(curr);
                cnum = 0;
                curr = "";
            }else if(s[i] == ']'){
                prevStr = st.top(); st.pop();
                prevNum = stoi(st.top()); st.pop();
                curr = repeat(curr, prevNum);
                curr = prevStr + curr;
            }else if(isdigit(s[i])){
                cnum = cnum*10 + (s[i]-'0');
            }else{
                curr += s[i];
            }
        }
        return curr;
    }
};