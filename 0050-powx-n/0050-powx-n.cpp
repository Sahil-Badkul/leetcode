class Solution {
public:
    double myPow(double x, int nn) {
        double ans = 1.0;
        long long n = nn;
        bool isNeg = false;
        if(n < 0){
            isNeg = true;
            n = -n;
        }
        while(n > 0){
            if(n % 2 == 0){
                x *= x;
                n /= 2;
            }else{
                ans *= x;
                n--;
            }
        }
        if(isNeg){
            return 1/ans;
        }
        return ans;
    }
};