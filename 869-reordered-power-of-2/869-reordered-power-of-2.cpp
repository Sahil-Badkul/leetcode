class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        for(int i = 0, pow2 = 1; i < 30; i++, pow2 <<= 1){
            string pow_2 = to_string(pow2);
            sort(pow_2.begin(), pow_2.end());
            if(s == pow_2) return true;
        }
        return false;
    }
};