class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        while(i <= j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    void allPartition(int idx, string s, vector<string> &ds, vector<vector<string>> &res){
        if(idx == s.size()){
            res.push_back(ds);
            return;
        }
        for(int i = idx; i < s.size(); i++){
            if(isPalindrome(s,idx, i)){
                ds.push_back(s.substr(idx, i-idx+1));
                allPartition(i+1,s,ds,res);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;
        allPartition(0,s,ds,res);
        return res;
    }
};