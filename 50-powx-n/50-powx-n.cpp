class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0; 
        long nn = n;
        if(n < 0) nn = -1 * nn;
        while(nn){
            if(nn % 2 == 0){
                x *= x;
                nn /= 2;
            }else{
                ans *= x;
                nn--;
            }
        }
        if(n < 0) ans = double(1)/ans;
        return ans;
    }
};