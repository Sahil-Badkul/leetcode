class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // freq vector for storing value of char or it's like a mark
        vector<int> umap(256,-1);
        int n = s.size();
        int l = 0, r = 0;   // l-left, r-right pointer
        int len = 0;    // initial lenr
        while(r < n){
            // if char is present in freq then we are gonna to update l-left by which idx it's appear
            if(umap[s[r]] != -1) l = max(umap[s[r]] + 1,l);
            // updating freq 
            umap[s[r]] = r;
            // updating len
            len = max(len, r - l + 1);  // we are doing r-l+1 bcaz have to return substring size and idx.
            r++;
        }
        return len;
    }
};