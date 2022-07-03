class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        // gready;
        int n = nums.size(), len = 1;
        int prev = 0, curr = 1;
        for(int i = 1; i < n; i++){
            curr = nums[i] - nums[i-1];
            if((curr > 0 && prev <= 0) || (curr < 0 && prev >= 0)){
                len++;
                prev = curr;
            }
        }
        return len;
    }
};