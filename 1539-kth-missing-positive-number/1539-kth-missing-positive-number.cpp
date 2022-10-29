class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, j = 1, miss = 0; 
        while(k){
            if(i < arr.size() && arr[i] == j) i++;
            else{
                miss = j;
                k--;
            }
            j++;
        }
        return miss;
    }
};