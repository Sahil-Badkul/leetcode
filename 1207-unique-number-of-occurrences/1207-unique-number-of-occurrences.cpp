class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(auto &x : arr){
            freq[x]++;
        }
        unordered_map<int,int> mp;
        for(auto &it : freq){
            mp[it.second]++;
            if(mp[it.second] > 1){
                return false;
            }
        }
        return true;
    }
};