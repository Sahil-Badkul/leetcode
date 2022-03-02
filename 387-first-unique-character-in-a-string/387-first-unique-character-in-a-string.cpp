class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char,int> umap;
        for(int i = 0; i < n; i++){
            umap[s[i]]++;
        }
        for(int i = 0; i < n; i++){
            if(umap[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};