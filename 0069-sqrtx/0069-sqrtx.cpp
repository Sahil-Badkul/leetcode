class Solution {
public:
    int mySqrt(int x) {
        int lo = 0, hi = x;
        int res = -1;
        while(lo <= hi){
            long long mid = lo + (hi-lo)/2;
            if(mid*mid == x){
                return mid;
            }else if(mid*mid < x){
                res = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return res;
    }
};