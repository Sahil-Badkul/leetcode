class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        int diff = 0, prevDiff = nums[1] - nums[0];
        int cnt = 0, ind = 0;
        for(int i = 1; i < nums.size()-1; i++){
            diff = nums[i+1] - nums[i];
            if(diff == prevDiff){
                ++ind;
            }else{
                prevDiff = diff;
                ind = 0;
            }
            cnt += ind;
        }
        return cnt;
    }
};