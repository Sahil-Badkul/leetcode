class Solution {
public:
    int compareVersion(string v1, string v2) {
        // v1 & v2 size
        int n = v1.size(), m = v2.size();
        // sum for comparing values b/w '.'
        int sum1 = 0, sum2 = 0;
        // i & j are iterator
        int i = 0, j = 0;
        while(i < n || j < m){
            // calculating sum of v1 b/w '.'
            while(i < n && v1[i] != '.'){
                sum1 = sum1*10 + (v1[i] - '0');
                i++;
            }
            // calculating sum of v2 b/2 '.'
            while(j < m && v2[j] != '.'){
                sum2 = sum2*10 + (v2[j] - '0');
                j++;
            }
            // comparing sum;
            if(sum1 < sum2){
                return -1;
            }else if(sum1 > sum2){
                return 1;
            }
            // reinitialize sum & increasing pointers;
            sum1 = sum2 = 0;
            i++;
            j++;
        }
        return 0;
    }
};