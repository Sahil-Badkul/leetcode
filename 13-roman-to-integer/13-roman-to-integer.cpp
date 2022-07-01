class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> sym = {{'I', 1}, {'V' , 5}, {'X' , 10}, {'L', 50}, {'C',100},{'D', 500}, {'M', 1000}};
        int n = s.size();
        int ans = sym[s[n-1]];
        for(int i = n-2; i >= 0; i--){
            // cout<<s[i]<<" "<<sym[s[i]]<<endl;
            if(sym[s[i+1]] > sym[s[i]]) ans -= sym[s[i]];
            else ans += sym[s[i]];
        }
        return ans;
    }    
};
// VI --> 6
// IV --> 4