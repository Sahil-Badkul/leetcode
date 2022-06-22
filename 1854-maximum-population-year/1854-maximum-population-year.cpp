class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[101] = {0};
        for(auto &x : logs){
            arr[x[0]-1950]++;
            arr[x[1]-1950]--;
        }
        int max = 0, year, cnt = 0;
        for(int i = 0;i < 101; i++){
            cnt += arr[i];
            if(cnt > max){
                max = cnt;
                year = i;
            }
        }
        return year + 1950;
    }
};