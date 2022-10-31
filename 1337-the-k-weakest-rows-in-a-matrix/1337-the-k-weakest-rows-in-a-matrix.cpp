class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        vector<pair<int,int>> v;
        for(int i = 0; i < mat.size(); i++){
            int ind = upper_bound(mat[i].rbegin(), mat[i].rend(), 0) - mat[i].rbegin();
            ind = mat[i].size() - ind;
            v.push_back({ind, i});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < k; i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};