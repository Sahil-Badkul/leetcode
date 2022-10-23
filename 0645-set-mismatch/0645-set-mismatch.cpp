class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long s = 0, sq = 0, n = nums.size(), mis, rep;
        s = n*(n+1)/2;
        sq = n*(n+1)*(2*n+1)/6;
        for(auto &x : nums){
            s -= x;
            sq -= x*x;
        }
        mis = (s+sq/s)/2;
        rep = mis-s;
        return {(int)rep, (int)mis};
    }
};