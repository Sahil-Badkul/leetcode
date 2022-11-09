class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int i = 0, j = 0, n = s.size();
        int ans = 0;
        while(j < n){
            while(i < n and st.count(s[j]) == true){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            j++;
            ans = max(ans, j-i);
        }
        return ans;
    }
};