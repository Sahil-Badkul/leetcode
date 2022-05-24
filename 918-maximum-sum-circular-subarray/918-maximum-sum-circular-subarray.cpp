class Solution {
public:
    int maxSubarray(vector<int> &nums){
        int maxSum = INT_MIN;
        int currSum = 0;
        for(auto &x: nums){
            currSum += x;
            maxSum = max(currSum, maxSum);
            if(currSum < 0) currSum = 0;
        }
        return maxSum;
    }
    int minSubarray(vector<int> &nums){
        int minSum = INT_MAX;
        int currSum = 0;
        for(auto &x : nums){
            currSum += x;
            minSum = min(currSum, minSum);
            if(currSum > 0) currSum = 0;
        }
        return minSum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int negCnt = 0;
        int maxi = INT_MIN;
        int totalSum = 0;
        for(auto &x : nums){
            totalSum += x;
            if(x < 0) negCnt++;
            maxi = max(maxi, x);
        }
        if(negCnt == n){
            return maxi;
        }
        int ans1 = maxSubarray(nums);
        int ans2 = totalSum - minSubarray(nums);
        return max(ans1, ans2);
    }
};