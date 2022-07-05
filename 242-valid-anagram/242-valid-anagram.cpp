class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort     --> TC : O(SlogS) + O(TlogT), SC : O(1)
        // hash     --> TC : O(S) + O(T), SC : O(S)
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;        
    }
};