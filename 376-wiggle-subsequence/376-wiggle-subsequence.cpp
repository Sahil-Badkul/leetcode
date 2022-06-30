class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        // Gready
        int n = nums.size(), prevDiff = 0, currDiff, len = 1;
        for(int i = 1; i < n; i++){
            currDiff = nums[i] - nums[i-1];
            if((currDiff < 0 && prevDiff >= 0) || (currDiff > 0 && prevDiff <= 0)){
                len++;
                prevDiff = currDiff;
            }
        }
        return len;
    }
};