class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> lastIdx;
        for(int i = 0; i < s.size(); i++){
            lastIdx[s[i]] = i;
        }
        int start = 0, size = 0, end = 0;
        vector<int> ans;
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            end = max(end, lastIdx[c]);
            if(i == end){
                ans.push_back(i-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};