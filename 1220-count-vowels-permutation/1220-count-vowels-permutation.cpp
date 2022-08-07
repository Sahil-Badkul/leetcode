int vowelPerms[20001];
auto _ = []{
    const int MOD = 1e9 + 7;
	long a = 1, e = 1, i = 1, o = 1, u = 1, a_new, e_new, i_new, o_new, u_new;
	vowelPerms[1] = 5;
	for (int j = 2; j <= 20000; j++) {
		a_new =  e;
		e_new = (a + i) % MOD;
		i_new = (a + e + o + u) % MOD;
		o_new = (i + u) % MOD;
		u_new =  a;
		a = a_new, e = e_new, i = i_new, o = o_new, u = u_new;
		vowelPerms[j] = (a + e + i + o + u) % MOD;
	}
	return true;
}();  // IIFE

class Solution {
public:
    int countVowelPermutation(int n) {
        return vowelPerms[n];
    }
};