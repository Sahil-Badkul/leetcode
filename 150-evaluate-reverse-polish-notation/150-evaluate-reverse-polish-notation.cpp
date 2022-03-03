class Solution {
public:
    int calc(int a, int b, string op){
        if(op == "+") return a+b;
        else if(op == "-") return a-b;
        else if(op == "*") return a*b;
        return a/b;
    }
    int evalRPN(vector<string>& token) {
        int n = token.size();
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(token[i] == "+" || token[i] == "-" || token[i] ==  "*" || token[i] == "/"){
                int num2 = st.top(); st.pop();
                int num1 = st.top(); st.pop();
                int ans = calc(num1, num2, token[i]);
                st.push(ans);
            }else{
                st.push(stoi(token[i]));
            }
        }
        return st.top();
    }
};