class Solution {
public:
    string isPalindrome(string &s, int i, int j){
        while(i >= 0 && j < s.size()){
            if(s[i] != s[j]) break;
            i--;
            j++;
        }
        string temp = "";
        for(int k = i+1; k < j; k++){
            temp += s[k];
        }
        return temp;
    }
    string longestPalindrome(string s) {
        string ans, temp;
        for(int i = 0; i < s.size(); i++){
            string odd = isPalindrome(s, i, i);
            if(odd.size() > ans.size()) ans = odd;
            string even = isPalindrome(s, i, i+1);
            if(even.size() > ans.size()) ans = even;
        }
        return ans;
    }
};