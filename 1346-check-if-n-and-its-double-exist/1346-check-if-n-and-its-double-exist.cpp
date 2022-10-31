class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for(auto &x : arr){
            if(st.count(x*2) or (x % 2== 0 and st.count(x/2))) return true;
            st.insert(x);
        }
        return false;
    }
};