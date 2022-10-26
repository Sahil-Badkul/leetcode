class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 2) return false;
        unordered_map<int,int> mp;
        mp[0] = -1;
        int currsum = 0;
        for(int i = 0; i < n; i++){
            currsum += nums[i];
            if(k != 0) 
                currsum %= k;
            if(mp.find(currsum) != mp.end()){
                if(i - mp[currsum] > 1) 
                    return true;
            }else{
                mp[currsum] = i;
            }
        }
        return false;
    }
};