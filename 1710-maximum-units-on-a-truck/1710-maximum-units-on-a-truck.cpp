class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // fractional knapsack
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int maxUnit = 0;
        for(int i = 0; i < boxTypes.size(); i++){
            if(boxTypes[i][0] <= truckSize){
                truckSize -= boxTypes[i][0];
                maxUnit += boxTypes[i][0] * boxTypes[i][1];
            }else{
                maxUnit += truckSize * boxTypes[i][1];
                break;
            }
        }
        return maxUnit;
    }
};
/*
1,3     2,2     3,1     cap = 4
1 + 2 + 1
1*3 + 2*2 + 1*1 = 8



5,10    3,9     4,7     2,5     cap = 10
5 + 3 + 2
5 * 10 + 3 * 9 + 2 * 7 
50 + 27 + 14 = 91
*/