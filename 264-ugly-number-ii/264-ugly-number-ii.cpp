class Solution {
public:
    int nthUglyNumber(int n) {
        if(n <= 0){
            return false;
        }
        if( n == 1 ){
            return true;
        }
        
        vector<int> ugly(n);
        ugly[0] = 1;
        int t2 = 0, t3 = 0, t5 = 0; // pointer to point 2, 3, 5;
        for(int i = 1; i < n; i++){
            int curr = min(ugly[t2]*2, min(ugly[t3]*3, ugly[t5]*5));
            if(curr == ugly[t2]*2) t2++;
            if(curr == ugly[t3]*3) t3++;
            if(curr == ugly[t5]*5) t5++;
            
            ugly[i] = curr;
        }
        return ugly[n-1];
    }
};