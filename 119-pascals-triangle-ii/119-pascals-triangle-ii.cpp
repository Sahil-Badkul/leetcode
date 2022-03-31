class Solution {
public:
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
};