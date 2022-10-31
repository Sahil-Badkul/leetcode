class Solution {
public:
    void nextGreaterElement(vector<int> &nums, vector<int> &nge){
        stack<int> st;
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            if(!st.empty()) nge[i] = st.top();
            else nge[i] = n;
            st.push(i);
        }
    }
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1), res(n, -1);
        nextGreaterElement(nums, nge);
        for(int i = 0; i < n; i++){
            int l = nge[i]+1;
            while(l < n && nums[l] <= nums[i]){
                l = nge[l];
            }
            if(l >= n) res[i] = -1;
            else res[i] = nums[l];
        }
        return res;
    }
};