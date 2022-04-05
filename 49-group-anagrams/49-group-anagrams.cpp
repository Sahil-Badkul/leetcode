class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> grp;
        for(auto &str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            grp[temp].push_back(str);
        }
        vector<vector<string>> res;
        for(auto &it : grp){
            res.push_back(it.second);
        }
        return res;
    }
};