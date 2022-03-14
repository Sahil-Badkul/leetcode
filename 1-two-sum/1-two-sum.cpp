class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(umap.find(target - nums[i]) != umap.end()){
                ans.push_back(i);
                ans.push_back(umap[target - nums[i]]);
                return ans;
            }
            umap[nums[i]] = i;
        }
        return ans;
    }
};