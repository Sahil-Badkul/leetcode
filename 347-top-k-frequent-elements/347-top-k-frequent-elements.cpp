class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> heap;
        for(auto &num : freq){
            heap.push({num.second,num.first});
        }
        vector<int> ans;
        while(!heap.empty() and k--){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};