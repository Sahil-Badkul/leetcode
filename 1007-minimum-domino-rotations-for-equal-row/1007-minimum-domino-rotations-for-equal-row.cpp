class Solution {
public:
    int minDominoRotations(vector<int>& top, vector<int>& bot) {
        vector<int> a(7), b(7), same(7);
        int n = top.size();
        for(int i = 0; i < n; i++){
            a[top[i]]++;
            b[bot[i]]++;
            if(top[i] == bot[i]){
                same[top[i]]++;
            }
        }
        for(int i = 1; i < 7; i++){
            if(a[i] + b[i] - same[i] == n){
                return n - max(a[i], b[i]);
            }
        }
        return -1;
    }
};