class Solution {
public:
    vector<vector<int>> ans;
    void power(vector<int> nums, int l, vector<int> temp){
        if(l == nums.size()){
            ans.push_back(temp);
            return;
        }
        power(nums, l+1, temp); 
        temp.push_back(nums[l]);
        power(nums,l+1, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        power(nums, 0, temp);
        return ans;
    }
};