class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort     --> TC : O(SlogS) + O(TlogT), SC : O(1)
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;        
        // hash     --> TC : O(S) + O(T), SC : O(S)
        vector<int> freq(26, 0);
        for(auto &ch : s) freq[ch - 'a']++;
        for(auto &ch : t) freq[ch - 'a']--;
        for(auto &f : freq){
            if(f != 0) return false;
        }
        return true;
    }
};