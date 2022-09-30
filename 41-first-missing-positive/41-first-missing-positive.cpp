class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &x : nums) mp[x]++;
        for(int i = 1; i <= 1e5+9; i++){
            if(mp[i] == 0) return i;
        }
        return nums.size();
    }
};