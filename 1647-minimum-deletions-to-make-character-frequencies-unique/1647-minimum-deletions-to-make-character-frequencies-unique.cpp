class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        for(char &c : s){
            freq[c - 'a']++;
        }
        int cnt = 0;
        unordered_set<int> seen;
        for(int i = 0; i <26; i++){
            while(freq[i] && seen.find(freq[i]) != seen.end()){
                freq[i]--;
                cnt++;
            }
            seen.insert(freq[i]);
        }
        return cnt;
    }
};

/*
cases : 
    +only two char have same freq.
        -check if deletion of any one freq not equal other
    +more then two char have same freq.
*/