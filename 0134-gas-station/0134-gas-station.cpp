class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, n = gas.size(), start = 0, all = 0;
        for(int i = 0; i < n; i++){
            total += gas[i] - cost[i];
            if(total < 0){
                start = i+1;
                total = 0;
            }
            all += gas[i] - cost[i];
        }
        return all < 0 ? -1 : start;
    }
};