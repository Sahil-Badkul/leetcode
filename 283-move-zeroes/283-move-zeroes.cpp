class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastZero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[lastZero++] = nums[i];
            }
        }
        for(int i = lastZero; i < nums.size(); i++){
            nums[i] = 0;
        }
        
    }
};