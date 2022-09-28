class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1, zero_cnt = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != 0) pro *= nums[i];
            else zero_cnt++;
        }
        vector<int> ans(n, 0);
        if(zero_cnt > 1){
            return ans;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] != 0 && zero_cnt == 0){
                ans[i] = pro/nums[i];
            }else if(nums[i] == 0 && zero_cnt == 1){
                ans[i] = pro;
            }
        }
        return ans;
    }
};