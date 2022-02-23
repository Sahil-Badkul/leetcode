class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        int num = x;
        unsigned rev = 0;
        while(num){
            rev = rev * 10 + num%10;
            num /= 10;
        }
        return rev == x;
    }
};