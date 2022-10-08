class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 1e9;
        for(int i = 0; i < n; i++){
            int st = i+1, en = n-1;
            while(st < en){
                int sum = nums[i] + nums[st] + nums[en];
                if(sum == target) return sum;
                if(abs(target-ans) > abs(target-sum)){
                    ans = sum;
                }
                if(sum > target) en--;
                else st++;
            }
        }
        return ans;
    }
};