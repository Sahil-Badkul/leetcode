class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, pro = 1;
        for(auto &x : nums){
            pro *= x;
            ans = max(ans, pro);
            if(pro == 0) pro = 1;
        }
        pro = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            pro *= nums[i];
            ans = max(ans, pro);
            if(pro == 0) pro = 1;
        }
        return ans;
    }
};