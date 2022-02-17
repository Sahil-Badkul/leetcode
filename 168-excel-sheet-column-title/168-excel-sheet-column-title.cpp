class Solution {
public:
    string convertToTitle(int num) {
        string ans; 
        while(num >= 26){
            int rem = num%26;
            num /= 26;
            if(rem == 0) ans = 'Z' + ans, num--;
            else ans = char(rem-1 + 'A') + ans;
        }
        if(num != 0) ans = char(num-1+'A') + ans;
        return ans;
    }
};