class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), lo = 0, hi = n-1;
        while(lo < hi){
            int sum = numbers[lo] + numbers[hi];
            if(sum == target){
                return {lo+1, hi+1};
            }else if(sum > target){
                hi--;
            }else{
                lo++;
            }
        }
        return {};
    }
};