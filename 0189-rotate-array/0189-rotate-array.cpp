class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        k -= n;
        k = abs(k);
        for(int i = 0; i < n; i++) nums.push_back(nums[i]);
        for(int i = 0; i < n; i++){
            nums[i] = nums[i+k];
        }
        nums.erase(nums.begin()+n, nums.end());
    }
};