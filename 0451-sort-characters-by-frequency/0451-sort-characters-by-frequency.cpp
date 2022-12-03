class Solution {
public:
    string frequencySort(string s) {
        int mp[256] = {0};
        for(auto &ch : s){
            mp[ch]++;
        }
        sort(s.begin(), s.end(), [&](char a, char b){
            return mp[a] > mp[b] || (mp[a] == mp[b] && a < b);
        });
        return s; 
    }
};