class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        /*
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
        */
        // Dp
        int n = nums.size(), up = 1, down = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] - nums[i-1] > 0) up = 1 + down;
            else if(nums[i] - nums[i-1] < 0) down = 1 + up;
        }
        return max(up, down);
    }
};