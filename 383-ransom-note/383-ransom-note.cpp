class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ran, mag;
        for(auto &c : ransomNote){
            ran[c]++;
        }
        for(auto &c : magazine){
            mag[c]++;
        }
        for(auto &c : ransomNote){
            if(ran[c] > mag[c]) return 0;
        }
        return 1;
    }
};