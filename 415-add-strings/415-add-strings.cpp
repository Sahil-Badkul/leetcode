class Solution {
public:
    void reverse(string &s){
        int n = s.size();
        for(int i = 0; i < n/2; i++){
            swap(s[i], s[n-i-1]);
        }
    }
    string addStrings(string num1, string num2) {
        string ans;
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        while(i >= 0 || j >= 0 || carry){
            if(i >= 0){
                carry += num1[i] - '0';
                i--;
            }
            if(j >= 0){
                carry += num2[j] - '0';
                j--;
            }
            ans += (carry % 10 + '0');
            carry /= 10;
        }
        reverse(ans);
        return ans;
    }
};