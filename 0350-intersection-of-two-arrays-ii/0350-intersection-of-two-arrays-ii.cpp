class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() > nums1.size()) intersect(nums2, nums1);
        unordered_map<int,int> fs;
        for(int i = 0; i < nums1.size(); i++) fs[nums1[i]]++;
        vector<int> res;
        for(auto &x : nums2){
            if(fs[x] > 0){
                res.emplace_back(x);
                fs[x]--;
            }
        }
        return res;
    }
};