class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int,int> next;
        stack<int> st;
        st.push(nums2.back());
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() and st.top() <= nums2[i]){
                st.pop();
            }
            if(!st.empty())
                next[nums2[i]] = st.top();
            else
                next[nums2[i]] = -1;
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(auto &x : nums1){
            ans.push_back(next[x]);
        }
        return ans;
    }
};