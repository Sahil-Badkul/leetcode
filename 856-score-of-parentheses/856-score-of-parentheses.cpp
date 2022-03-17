class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(auto &ch : s){
            if(ch == '('){
                st.push(0);
            }else{
                int val = st.top();
                st.pop();
                int newVal = 0;
                if(val){
                    newVal = 2*val;
                }else{
                    newVal = 1;
                }
                st.top() += newVal;
            }
        }
        return st.top();
    }

    /*
    // if anyone thinking about this then this is wrong approach
    int scoreOfParentheses(string s) {
        int cnt = 0;
        for(auto &ch : s){
            if(ch == '(') cnt++;
        }
        return cnt;
    }*/
};