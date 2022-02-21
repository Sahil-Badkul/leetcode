class Solution {
public:
    string helper(string s, int l, int r){
        while(l >= 0 and r < s.size() and s[l] == s[r]) {
            l--;
            r++;
        }
        string help = "";
        for(int i = l+1; i < r; i++){
            help += s[i];
        }
        return help;
    }
    string longestPalindrome(string s) {
        string ans = "", temp = "";
        int n = s.size();
        for(int i = 0; i < n; i++){
            // for odd like aba
            temp = helper(s,i,i);
            if(temp.size() > ans.size()){
                ans = temp;
            }
            // for even like abba
            temp = helper(s,i,i+1);
            if(temp.size() > ans.size()){
                ans = temp;
            }
        }
        return ans;
    }
};