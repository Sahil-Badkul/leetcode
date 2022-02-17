class Solution {
public:
    void permuteRecurcive(vector<int> nums, int l, int r, vector<vector<int>> &res){
        if(l == r){
            res.push_back(nums);
        }
        // making permutation.
        for(int i = l; i <= r; i++){
            // swapping.
            swap(nums[l],nums[i]);
            // recurcive call. fixing one character and swapping other.
            permuteRecurcive(nums,l+1,r,res);
            // backtracking.
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size() - 1;
        // helper function.
        permuteRecurcive(nums,0,n,res);
        return res;
    }
};