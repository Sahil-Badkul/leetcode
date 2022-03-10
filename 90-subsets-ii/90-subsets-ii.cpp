class Solution {
public:
    void uniqSub(int idx, vector<int>&arr, vector<int> &ds, set<vector<int>> &res){
        if(idx == arr.size()){
            sort(ds.begin(), ds.end());
            res.insert(ds);
            return;
        }
        uniqSub(idx+1, arr, ds, res);
        ds.push_back(arr[idx]);
        uniqSub(idx+1, arr, ds, res);
        ds.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        vector<int> ds;
        uniqSub(0, nums, ds, res);
        vector<vector<int>> ans;
        for(auto &subset : res){
            ans.push_back(subset);
        }
        return ans;
    }
};