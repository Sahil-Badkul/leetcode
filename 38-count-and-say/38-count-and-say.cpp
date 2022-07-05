class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string curr = "1";
        int i = 1;
        while(i < n){
            string temp = ""; 
            for(int j = 0; j < curr.size();){
                char ch = curr[j];
                int cnt = 0;
                while(j < curr.size() && curr[j] == ch){
                    cnt++;
                    j++;
                }
                temp += to_string(cnt) + ch;
            }
            curr = temp;
            i++;
        }
        return curr;
    }
};
