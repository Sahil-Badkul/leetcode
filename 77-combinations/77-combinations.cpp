class Solution {
public:
    void comb(vector<vector<int>> &ans,vector<int> ds, int idx,  int n, int k){
        if(ds.size() == k){
            ans.push_back(ds);
        }
        for(int i = idx; i < n; i++){
            ds.push_back(i+1);
            comb(ans, ds, i+1, n, k);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        comb(ans,ds, 0, n, k);
        return ans;
    }
};