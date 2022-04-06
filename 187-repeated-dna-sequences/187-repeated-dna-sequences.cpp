class Solution {
public:
    string substr(int idx, string &s){
        string str = "";
        for(int i = idx; i < idx+10; i++){
            str += s[i];
        }
        return str;
    }
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.size() < 10) return ans;
        unordered_map<string, int> mp;
        for(int i = 0; i <= s.size()-10; i++){
            string str = substr(i,s);
            mp[str]++;
        }
        for(auto &it : mp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};