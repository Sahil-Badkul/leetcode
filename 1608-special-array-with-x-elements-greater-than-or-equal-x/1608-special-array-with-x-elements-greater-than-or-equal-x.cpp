class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = n; i > 0; i--){
            int cnt = lower_bound(nums.begin(), nums.end(), i) - nums.begin();
            int rem = n - cnt;
            if(rem == i) return i;           
        }
        return -1;
    }
};