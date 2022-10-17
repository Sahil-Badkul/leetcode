class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26] = {0};
        for(auto ch : sentence) freq[ch - 'a']++;
        for(int i = 0; i < 26; i++) if(freq[i] == 0) return false;
        return true;
    }
};