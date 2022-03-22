class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n, 'a');
        k -= n;
        for(int i = n-1; i >= 0; i--){
            if(k >= 25){
                s[i] = s[i]+25;
                k -= 25;
            }else{
                s[i] = s[i] + k;
                k -= k;
            }            
        }
        return s;
        
    }
};