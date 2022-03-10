class Solution {
public:
    // void uniqSub(int idx, vector<int>&arr, vector<int> &ds, vector<vector<int>> &res){
    //     if(idx == arr.size()){
    //         sort(ds.begin(), ds.end());
    //         res.insert(ds);
    //         return;
    //     }
    //     uniqSub(idx+1, arr, ds, res);
    //     ds.push_back(arr[idx]);
    //     uniqSub(idx+1, arr, ds, res);
    //     ds.pop_back();
    // }
    void uniqSub(int idx, vector<int> &arr, vector<int>&ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i = idx; i < arr.size(); i++){
            if(i == idx || arr[i] != arr[i-1]){
                ds.push_back(arr[i]);
                uniqSub(i+1, arr, ds, ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        uniqSub(0, nums, ds, ans);
        return ans;
    }
};