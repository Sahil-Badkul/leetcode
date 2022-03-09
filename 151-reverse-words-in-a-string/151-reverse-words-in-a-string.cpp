class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        int n = s.size();
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(c != ' '){
                temp += c;
            }else if(c == ' ' and temp != ""){
                if(ans != ""){
                    ans = temp + " " + ans;
                }else{
                    ans = temp;
                }
                temp = "";
            }
        }
        if(temp != "" and ans != ""){
            ans = temp + " " + ans;
        }else if(ans == ""){
            ans = temp;
        }
        return ans;
    }
};