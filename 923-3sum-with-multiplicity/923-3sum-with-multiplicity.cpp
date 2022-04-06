class Solution {
public:
    /*
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
    */
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size(), mod = 1e9+7;;
        long res = 0;
        for(int i = 0; i < n; i++){
            vector<int> count(101, 0);
            for(int j = i+1; j < n; j++){
                int k = target - arr[i] - arr[j];
                if(k >= 0 && k <= 100 && count[k] > 0){
                    res += count[k];
                    res %= mod;
                }
                count[arr[j]]++;
            }
        }
        return (int)res;
    }
};