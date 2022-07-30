class Solution {
public:
    vector<int> countFreq(string &word){
        vector<int> freq(26, 0);
        for(auto &ch : word) freq[ch - 'a']++;
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxFreq(26, 0);     // for stroing freq maximum in all words2 
        vector<string> ans;
        for(auto &w : words2){
            vector<int> freq = countFreq(w);    // current word freq
            for(int i = 0; i < 26; i++) maxFreq[i] = max(maxFreq[i], freq[i]);  // updating max freq
        }
        for(auto &w : words1){
            vector<int> freq = countFreq(w);    // current word freq
            int i = 0;
            for(; i < 26; i++){
                if(freq[i] < maxFreq[i]) break;     // curr word freq lesser than maxfreq then not include that word
            }
            if(i == 26) ans.push_back(w);   // all char checked than add this to and
        }
        return ans;
    }
};