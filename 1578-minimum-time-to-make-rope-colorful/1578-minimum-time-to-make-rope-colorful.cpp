class Solution {
public:
    int minCost(string col, vector<int>& need) {
        // two pointer
        int totalTime = 0, i = 0, j = 0, n = col.size();
        while(i < n && j < n){
            int currTotal = 0, currMax = 0;
            while(j < n && col[i] == col[j]){
                currTotal += need[j];
                currMax = max(currMax, need[j]);
                j++;
            }
            totalTime += currTotal - currMax;
            i = j;
        }
        return totalTime;
        // TC : O(n), SC : O(1)
    }
};