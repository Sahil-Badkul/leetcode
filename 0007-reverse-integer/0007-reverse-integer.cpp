class Solution {
public:
    int reverse(int x) {
        long a = x, rev = 0;
        if(a < 0) a = -a;
        while(a > 0){
            rev = rev * 10 + a % 10;
            a /= 10;
        }
        if(x < 0) rev = -rev;
        if(rev > INT_MAX || rev < INT_MIN) return 0;
        return (int)rev;
    }
};