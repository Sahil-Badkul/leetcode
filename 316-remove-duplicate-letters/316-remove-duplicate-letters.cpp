class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastOccurence;
        for(int i = 0; i < s.size(); i++){
            lastOccurence[s[i] - 'a'] = i;
        }
        vector<bool> take(26,0);
        stack<int> st;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            int c = s[i] - 'a';
            if(take[c] == 1) continue;
            while(!st.empty() && st.top() > c && i < lastOccurence[st.top()]){
                take[st.top()] = 0;
                st.pop();
            }
            st.push(c);
            take[c] = 1;
        }
        while(!st.empty()){
            ans += st.top() + 'a';
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};