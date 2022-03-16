class Solution {
public:
    /*
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() -1;
        while(right >= left){
            swap(s[left++],s[right--]);
        }
    }
    */
    void reverseString(vector<char>& s) {
        int i = 0, n = s.size();
        while(i < n/2){
            swap(s[i], s[n-i-1]);
            i++;
        }
    }
};