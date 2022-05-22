class Solution {
public:
    int rob(vector<int>& nums) {
        // space optimization
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 0; i < nums.size(); i++){
            int rob = nums[i] + (i > 1 ? prev2 : 0);
            int notRob = prev;
            int curr_i = max(rob, notRob);
            prev2 = prev;
            prev = curr_i;
        }
        return prev;
    }
};