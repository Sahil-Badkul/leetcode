class Solution {
public:
    vector<long long> maximumEvenSplit(long long target) {
        if(target % 2 != 0) return {};
        long long i = 2;
        long long curSum = 0;
        vector<long long> ans;
        while((curSum+i) <= target){
            ans.push_back(i);
            curSum += i;
            i += 2;
        }
        int sz = ans.size();
        ans[sz-1] += (target-curSum);
        return ans;
    }
};