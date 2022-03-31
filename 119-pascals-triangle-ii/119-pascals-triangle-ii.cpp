class Solution {
public:
    /*
    //Naive approach :- TC : O(n^2) && SC : O(n^2)
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pt;
        for(int i=0;i<=rowIndex;i++){
            vector<int> temp(i+1);
            for(int j=0;j<=i;j++){
                if(j == 0 || j == i){
                    temp[j] = 1;
                }else{
                    temp[j] = pt[i-1][j-1] + pt[i-1][j];
                }
            }
            pt.push_back(temp);
        }
        return pt[rowIndex];
    }
    */
    // Better approach :- TC : O(n^2) && SC : O(1)
    vector<int> getRow(int n){
        vector<int> res = {1}, cur = {1};
        for(int i = 1; i <= n; i++){
            res.push_back(1);
            for(int j = 1; j < i; j++){
                res[j] = cur[j-1] + cur[j];
            }
            cur = res;
        }
        return res;
    }
};