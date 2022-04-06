class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size(), res = 0, mod = 1e9+7;
        for(int i = 0; i < n; i++){
            res = (res + mp[target-arr[i]]) % mod;
            for(int j = 0; j < i; j++){
                mp[arr[i] + arr[j]]++;
            }
        }
        return res;
    }
};