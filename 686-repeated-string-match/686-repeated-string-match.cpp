class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int  n = a.size(), m = b.size();
        for(int i = 0; i < n; i++){
            int j = 0;
            while(j < m && a[(i+j)%n] == b[j]){
                j++;
            }
            if(j == m){
                return (i+j-1)/n + 1;
            }
        }
        return -1;
    }
};