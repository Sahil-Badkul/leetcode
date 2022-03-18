class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1hash(26,0), s2hash(26,0);
        int s1size = s1.size();
        int s2size = s2.size();
        if(s1size > s2size) return false;
        int left = 0, right = 0;
        while(right < s1size){
            s1hash[s1[right] - 'a']++;
            s2hash[s2[right] - 'a']++;
            right++;
        }
        right--;
        while(right < s2size){
            if(s1hash == s2hash) return true;
            right++;
            if(right != s2size){
                s2hash[s2[right] - 'a']++;
            }
            s2hash[s2[left] - 'a']--;
            left++;
        }
        return false;
    }
};