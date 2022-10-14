class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int n = nums.size();
        int i = 1;
        while(i < n){
            nums[i] = pq.top();
            i += 2;
            pq.pop();
        }
        i = 0;
        while(i < n){
            nums[i] = pq.top();
            pq.pop();
            i+=2;
        }
    }
};