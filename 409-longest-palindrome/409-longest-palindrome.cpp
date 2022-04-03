class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(auto &c : s){
            freq[c]++;
        }
        int odd = 0;
        int res = 0;
        for(auto &it : freq){
            if(it.second % 2 == 0){
                res += it.second;
            }else{
                if(odd++ < 1){
                    res += it.second;
                }
                else res += (it.second - (it.second%2));
            }
        }
        return res;
    }
};