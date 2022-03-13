class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, maxSum = nums[0];
        for(auto &val : nums){
            curr += val;
            if(curr > maxSum){
                maxSum = curr;
            }
            if(curr < 0){
                curr = 0;
            }
        }
        return maxSum;
    }
};