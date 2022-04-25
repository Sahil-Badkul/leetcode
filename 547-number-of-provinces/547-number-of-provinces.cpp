class Solution {
public:
    int find(vector<int> &dsuf, int val){
        return dsuf[val] == -1 ? val : dsuf[val] = find(dsuf, dsuf[val]);
    }
    void unionSet(vector<int> &dsuf, int x, int y){
        int parentX = find(dsuf, x); // find returns the absolute parent
        int parentY = find(dsuf, y);
        if(parentX == parentY) return;  // if the parent of the both nodes is same then they belong to same province
        if(parentX > parentY) dsuf[parentY] = parentX;
        else dsuf[parentX] = parentY;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> dsuf(isConnected.size(), -1);
        for(int i = 0; i < isConnected.size(); i++){
            for(int j = 0; j < isConnected.size(); j++){
                if(i != j && (isConnected[i][j] == 1)){
                    unionSet(dsuf, i, j);
                }
            }
        }
        int cnt = 0;
        for(int i = 0; i < dsuf.size(); i++){
            if(dsuf[i] == -1) cnt++;
        }
        return cnt;
    }
};