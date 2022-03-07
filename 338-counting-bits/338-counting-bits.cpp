class Solution {
public:
    int setBit(int n){
        int cnt = 0;
        while(n){
            cnt += (n & 1);
            n = n>>1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int cnt = setBit(i);
            ans.push_back(cnt);
        }
        return ans;
    }
};