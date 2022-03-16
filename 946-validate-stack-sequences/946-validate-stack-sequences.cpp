class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for(auto &ele : pushed){
            st.push(ele);
            while(!st.empty() && j < popped.size() && popped[j] == st.top()){
                st.pop();
                j++;
            }
        }
        return j == popped.size();
    }
};