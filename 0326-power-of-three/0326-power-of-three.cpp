class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 1){
            return false;
        }else if(n % 3 == 0){
            return isPowerOfThree(n/3);
        }
        return n == 1;
    }
};