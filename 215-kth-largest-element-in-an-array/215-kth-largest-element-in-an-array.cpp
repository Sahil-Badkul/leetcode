class Solution {
public:
    int using_sorting(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n-k];
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        // return using_sorting(nums, k);
        priority_queue<int> pq;
        for(auto &x : nums) pq.push(x);
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};