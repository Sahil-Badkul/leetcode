class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(ans.size() == 0)
                    ans = temp;
                else if(temp.size())
                    ans = temp + " " + ans;
                temp.clear();
            }else{
                temp += s[i];
            }
        }
        if(temp.size()){
            if(ans.size() == 0)
                ans = temp;
            else
                ans = temp + " " + ans;
        }
        return ans;
    }
};