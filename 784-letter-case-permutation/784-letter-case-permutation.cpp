class Solution {
public:
    void permute(string curr, string s, vector<string> &ans, int i){
        if(i == s.size()){
            ans.push_back(curr);
            return;
        }
        if(isdigit(s[i])){
            curr.push_back(s[i]);
            permute(curr,s,ans,i+1);
        }
        else{
            string c1 = curr;
            c1.push_back(tolower(s[i]));
            permute(c1, s, ans, i+1);
            
            string c2 = curr;
            c2.push_back(toupper(s[i]));
            permute(c2,s,ans,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        permute("",s, ans, 0);
        return ans;
    }
};