class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(i = 0; i < k; i++){
            pq.push({nums[i], i});
        }
        ans.push_back(pq.top().first);
        for(;i < n; i++){
            while(!pq.empty() && pq.top().second <= i-k) pq.pop();
            pq.push({nums[i], i});
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};