class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib = {0,1};
        for(int i = 2; fib[i-1] + fib[i-2] <= k; i++){
            fib.push_back(fib[i-1] + fib[i-2]);
        }
        int ans = 0;
        while(k > 0){
            if(fib.back() > k){
                fib.pop_back();
                continue;
            }
            ans++;
            k -= fib.back();
            fib.pop_back();
        }
        return ans;
    }
};