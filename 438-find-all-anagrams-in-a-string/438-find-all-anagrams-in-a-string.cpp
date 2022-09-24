class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0, j = p.size(), n = s.size();
        vector<int> ans;
        if(n < j) return ans;
        vector<int> p_count(26, 0), s_count(26, 0);
        for(auto &ch : p) p_count[ch - 'a']++;
        for(;i < j; i++) s_count[s[i] - 'a']++;
        if(p_count == s_count) ans.push_back(0);
        // cout<<s[i];
        while(i < n){            
            s_count[s[i] - 'a']++;
            s_count[s[i-j] - 'a']--;
            // cout<<i<<" "<<i-j<<endl;
            if(p_count == s_count) ans.push_back(i-j+1);
            i++;
        }        
        return ans;
    }
};