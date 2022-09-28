class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mp;
        for(auto &ch : t) mp[ch]++;
        int mini = INT_MAX, count = mp.size(), i = 0, j = 0, n = s.size(), start = 0;
        string ans = "";
        while(j < n){
            mp[s[j]]--;
            if(mp[s[j]] == 0){
                count--;
            }
            if(count == 0){
                if(mini > j-i+1){
                    mini = j-i+1;
                    start = i;
                }
                while(count == 0){
                    mp[s[i]]++;
                    if(mp[s[i]] > 0){
                        count++;
                        if(mini > j-i+1){
                            mini = j-i+1;
                            start = i;
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        return mini == INT_MAX ? "" : s.substr(start, mini);
    }
};