class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> umap = { {'(',1}, {')',-1}, {'{',2}, {'}',-2}, {'[',3}, {']',-3}};
        
        stack<char> st;
        for(auto &c : s){
            if(umap[c] > 0){
                st.push(c);
            }else{
                if(st.empty()) return false;
                if(umap[st.top()] + umap[c] != 0) return false;
                st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};