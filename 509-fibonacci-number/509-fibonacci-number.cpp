class Solution {
public:
    int fib(int n) {
        vector<int> fib;
        fib.push_back(0);
        fib.push_back(1);
        for(int i = 2; i <= 31; i++){
            int num = fib[i-1] + fib[i-2];
            fib.push_back(num);
        }
        return fib[n];
    }
};