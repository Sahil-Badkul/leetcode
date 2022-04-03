class Solution {
public:
    /*
    void nextPermutation(vector<int>& nums) {
        // cpp built in function.
        next_permutation(nums.begin(),nums.end());
    }
    */
    // O(n) approach
    /*
    Approach :

Step 1: Linearly traverse array from backward such that ith index value of the array is less than (i+1)th index value. Store that index in a variable.

Step 2: If the index value received from step 1 is less than 0. This means the given input array is the largest lexicographical permutation. Hence, we will reverse the input array to get the minimum or starting permutation. Linearly traverse array from backward. Find an index that has a value greater than the previously found index. Store index another variable.

Step 3: Swap values present in indices found in the above two steps.

Step 4: Reverse array from index+1 where the index is found at step 1 till the end of the array.
    */
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