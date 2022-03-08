class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        int i = num.size()-1;
        vector<int> ans;
        while(k!=0 or i>=0 or carry > 0){
            if(i >= 0){
                carry += num[i];
                i--;
            }
            if(k >= 0){
                carry += k % 10;
                k /= 10;
            }
            ans.push_back(carry%10);
            carry /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};