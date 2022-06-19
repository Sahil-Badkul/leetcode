class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> res;
        int start, n = products.size();
        string prefix;
        for(auto &c : searchWord){
            prefix += c;
            start = lower_bound(products.begin(), products.end(), prefix) - products.begin();
            
            res.push_back({});
            for(int i = start; i < min(start+3, n) && !products[i].compare(0, prefix.length(), prefix); i++) {
                res.back().push_back(products[i]);
            }
        }
        return res; 
    }
};