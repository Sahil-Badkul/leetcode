class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        if(n == 1) return true;
        while(n%2 == 0) n /= 2;
        return n == 1;
    }
};