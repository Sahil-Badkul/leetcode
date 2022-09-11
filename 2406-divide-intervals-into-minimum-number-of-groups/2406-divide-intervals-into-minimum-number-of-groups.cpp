class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int,int> mp;
        for(auto &v : intervals){
            mp[v[0]]++;
            mp[v[1]+1]--;
        }
        int sum = 0, ans = 0;
        for(auto &it : mp){
            ans = max(ans, sum += it.second);
        }
        return ans;
    }
};