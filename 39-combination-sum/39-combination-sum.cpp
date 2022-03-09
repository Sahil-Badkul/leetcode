class Solution {
public:
    void uniqueComb(int idx, int n, int target,vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
        if(idx == n){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        // pick 
        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            target -= arr[idx];
            uniqueComb(idx, n, target, arr, ds, ans);
            ds.pop_back();
            target += arr[idx];
        }
        // not pick
        uniqueComb(idx+1, n, target, arr, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = candidates.size();
        uniqueComb(0,n, target, candidates, ds, ans);
        return ans;
    } 
};