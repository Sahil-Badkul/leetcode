class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> umap = { {'(',1}, {')',-1}, {'{',2}, {'}',-2}, {'[',3}, {']',-3}};

        int n = s.size();        
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(umap[s[i]] > 0){
                st.push(s[i]);
            }else if(umap[s[i]] < 0){
                if(!st.empty()){
                    char c = st.top();
                    if(umap[s[i]] + umap[c] != 0){
                        return false;
                    }
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};