class Solution {
public:
    // Not check because its check for palindrome
    // bool isPalindrome(string &s, int i, int j){
    //     while(i >= 0 && j < s.size()){
    //         if(s[i--] != s[j++]) return false;
    //     }
    //     return true;
    // }
    // insteed of this just increase count while expanding
    int countSubstrings(string s) {
        int n = s.size(), cnt = 0;
        // for odd length
        for(int i = 0; i < n; i++){
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                cnt++;
                l--;
                r++;
            }
        }
        // for even len
        for(int i = 0; i < n; i++){
            int l = i-1, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                cnt++;
                l--;
                r++;
            }
        }
        return cnt;
    }
};