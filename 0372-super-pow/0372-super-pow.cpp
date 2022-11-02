class Solution {
public:
    int base = 1337;
    int powMod(int a, int k){
        a %= base;
        int res = 1;
        for(int i = 0; i < k; i++){
            res = (res * a) % base;
        }
        return res;
    }
    // ab%k = (a%k)(b%k)%k
    // a^123456 = a^123450 * a^5
    int superPow(int a, vector<int>& b) {
        if(b.empty()){
            return 1;
        }
        int lastdigit = b.back();
        b.pop_back();
        return (powMod(superPow(a, b), 10) * powMod(a, lastdigit)) % base;
    }
};