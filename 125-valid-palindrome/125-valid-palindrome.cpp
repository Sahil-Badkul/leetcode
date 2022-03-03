class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(auto &ch : s){
            if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z') or (ch >= '0' and ch <= '9')){
                res += (char) tolower(ch);
            }
        }
        // Tow pointer approach
        int l = 0, r = res.size() - 1;
        while(r >= l){
            if(res[l++] != res[r--]){
                return false;
            }
        }
        return true;
    }
};