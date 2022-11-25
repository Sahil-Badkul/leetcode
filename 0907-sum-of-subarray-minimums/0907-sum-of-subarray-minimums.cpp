class Solution {
public:
    // void print(vector<int> ar){
    //     for(auto &x : ar) cout<<x<<" ";
    //     cout<<endl;
    // }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> next(n), prev(n);
        for(int i = 0; i < n; i++){
            prev[i] = i;
            next[i] = n - i - 1;
        }
        stack<int> st;
        st.push(n-1);
        for(int i = n-2; i >= 0; i--){
            while(!st.empty() and arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                next[i] = st.top()-i-1;
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        st.push(0);
        for(int i = 1; i < n; i++){
            while(!st.empty() and arr[st.top()] > arr[i]){
                st.pop();
            }
            if(!st.empty()){
                prev[i] = i-st.top()-1;
            }
            st.push(i);
        }
        // cout<<"next "<<endl;
        // print(next);
        // cout<<"prev "<<endl;
        // print(prev);
        long long ans = 0, mod = 1e9+7;
        for(int i = 0; i < n; i++){
            ans += (1l * arr[i] * (prev[i]+1) * (next[i]+1));
            ans %= mod;
        }
        return ans;
    }
};