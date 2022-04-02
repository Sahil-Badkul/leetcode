class Solution {
public:
    bool check(string s, int st, int en){
        while(st <= en){
            if(s[st++] != s[en--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        // Two pointer
        int st = 0, en = s.size()-1;
        while(st <= en){
            if(s[st] != s[en]){
                return check(s, st, en-1) or check(s, st+1, en);
            }
            st++;
            en--;
        }
        return true;
    }
};