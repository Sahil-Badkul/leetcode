class Solution {
public:
    string repeat(string s, int n)
    {
        string s1 = s;
        for (int i=1; i<n;i++)
            s += s1;
        return s;
    }
    string decodeString(string s) {
        string prev = "", cstr = "";
        int cnum = 0, pnum = 0;
        stack<string> st;        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '['){
                // cout<<'['<<endl;
                // cout<<cnum<<" "<<cstr<<endl;
                st.push(to_string(cnum));
                st.push(cstr);
                cstr = "";
                cnum = 0;
            }else if(s[i] == ']'){
                prev = st.top(); st.pop();
                pnum = stoi(st.top()); st.pop();
                cstr = prev + repeat(cstr, pnum);
                // cout<<']'<<endl;
                // cout<<cstr<<" "<<prev<<endl;
            }else if(isdigit(s[i])){
                cnum = cnum * 10 + (s[i]-'0');
            }else{
                // cout<<"appending.."<<endl;
                cstr += s[i];
            }
        }
        return cstr;
    }
};