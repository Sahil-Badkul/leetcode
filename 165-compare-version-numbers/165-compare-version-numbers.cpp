class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n = v1.size(), m = v2.size();
        int sum1 = 0, sum2 = 0;
        int i = 0, j = 0;
        while(i < n || j < m){
            while(i < n && v1[i] != '.'){
                sum1 = sum1*10 + (v1[i] - '0');
                i++;
            }
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
            // reinitialize sum;
            sum1 = sum2 = 0;
            i++;
            j++;
        }
        return 0;
    }
};