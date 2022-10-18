class Solution {
public:
    string helper(string str){
        int n = str.size();
        string res = "";
        for(int i = 0; i < n; i++){
            int cnt = 1;
            while((i+1 < n) && str[i] == str[i+1]){ 
                cnt++,i++;
            }
            res += to_string(cnt) + str[i];
        }
        return res;
    }
    string countAndSay(int n) {
        if(n == 1) return "1";
        string cas = "1";
        for(int i = 1; i < n; i++){
            cas = helper(cas);            
        }
        return cas;
    }
};