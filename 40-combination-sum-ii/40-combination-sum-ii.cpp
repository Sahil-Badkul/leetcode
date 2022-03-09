class Solution {
public:
    void uniqComb(int idx, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }   
        for(int i = idx; i < arr.size(); i++){
            // if it's same with prev then continue;
            if(i > idx && arr[i] == arr[i-1]) continue;
            // if curr element is greater than target then break as our arr is sorted.
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            uniqComb(i+1, target-arr[i], arr, ds, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        // sort candidates for easy
        sort(candidates.begin(), candidates.end());
        uniqComb(0, target, candidates, ds, ans);
        return ans;
    }
};