class Solution {
public:
    void permute(vector<int> nums, int l, int r, vector<vector<int>> &res){
        if(l == r){
            res.push_back(nums);
            return;
        }
        for(int i = l; i <= r; i++){
            if(i != l and nums[i] == nums[l]) continue;
            swap(nums[i], nums[l]);
            permute(nums,l+1,r,res);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        permute(nums, 0, nums.size()-1, res);
        return res;
    }
};