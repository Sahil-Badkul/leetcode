class Solution {
public:
    void previousSmallest(int *prev,vector<int> &nums, int n){
        stack<int> st;
        for(int i = 0;i < n; i++){
            while(!st.empty() and nums[st.top()] >= nums[i]) st.pop();
            prev[i] = (st.empty() ? -1 : st.top());
            st.push(i);
        }
    }
    void nextSmallest(int *next,vector<int> &nums, int n){
        stack<int> st;
        for(int i = n-1;i >= 0; i--){
            while(!st.empty() and nums[st.top()] >= nums[i]) st.pop();
            next[i] = (st.empty() ? -1 : st.top());
            st.push(i);
        }
    }
    
    int largestRectangleArea(vector<int>& ht) {
        int n = ht.size();
        int prev[n];
        int next[n];
        previousSmallest(prev, ht, n);
        nextSmallest(next, ht, n);
        int ans = INT_MIN, area = 0;
        /*
        for(auto &ele : ht) cout<< ele << " ";
        cout<<endl;
        for(auto &i : prev) cout<< i << " ";
        cout<<endl;
        */
        for(auto &i : next){
            i == -1 ? i = n : i;
            // cout<< i << " ";
        } 
        // cout<<endl;
        
        for(int i = 0; i < n; i++){
            area = ht[i] + ((i - prev[i] - 1) * ht[i]) + ((next[i] - i - 1) * ht[i]);
            // cout<<area<<" ";
            ans = max(ans, area);
        }
        return ans;
    }
};