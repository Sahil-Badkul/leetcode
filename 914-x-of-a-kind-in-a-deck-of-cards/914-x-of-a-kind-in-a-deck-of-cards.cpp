class Solution {
public:
    int N = 1e4;
    int gcd(int a, int b){
        return a == 0 ? b : gcd(b%a, a);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> freq(N,0);
        for(auto &i : deck){
            freq[i]++;
        }
        int g = -1;
        for(int i = 0; i < N; i++){
            if(freq[i] > 0){
                if(g == -1){
                    g = freq[i];
                }else{
                    g = gcd(g,freq[i]);
                }
            }
        }
        return g >= 2;
    }
};