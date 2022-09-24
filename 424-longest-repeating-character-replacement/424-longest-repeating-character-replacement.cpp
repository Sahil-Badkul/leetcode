class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0, maxi = 0;
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, ++mp[s[i]]);
            if(res - maxi < k){
                res++;
            }else{
                mp[s[i-res]]--;
            }
        }
        return res;
    }
};