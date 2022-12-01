class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        if(c == 'a' or c == 'e' or c == 'i' or c == 'u' or c == 'o'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int fs = 0, sn = 0, n = s.size()/2;
        for(int i = 0; i < n; i++){
            if(isVowel(s[i])){
                fs++;
            }
            if(isVowel(s[i+n])){
                sn++;
            }
        }
        return fs == sn;
    }
};