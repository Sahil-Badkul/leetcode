class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto &ele : nums){
            ele = ele*ele;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};