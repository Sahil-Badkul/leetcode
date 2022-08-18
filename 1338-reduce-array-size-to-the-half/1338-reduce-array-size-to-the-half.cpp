class Solution {
public:
    bool static comp(pair<int,int> &a, pair<int,int> &b){
        return a.second > b.second;
    }
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(auto &ele : arr) mp[ele]++;
        vector<pair<int,int>> v;
        for(auto &it : mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), comp);
        int ans = 0, nn = n;
        int i = 0;
        while(nn > n/2){
            nn -= v[i].second;
            i++;
            ans++;
        }
        return ans;
    }
};