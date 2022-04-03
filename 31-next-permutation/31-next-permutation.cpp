class Solution {
public:
    /*
    void nextPermutation(vector<int>& nums) {
        // cpp built in function.
        next_permutation(nums.begin(),nums.end());
    }
    */
    // O(n) approach
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
        int k,l;
        for(k = n-2; k >= 0; k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        if(k < 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(l = n-1; l >= 0; l--){
            if(nums[l] > nums[k]) break;
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1, nums.end());
    }
};