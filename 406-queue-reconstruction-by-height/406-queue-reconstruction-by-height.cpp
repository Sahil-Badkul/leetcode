class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        sort(people.begin(), people.end(), comp);
        vector<vector<int>> ans(n, vector<int>(2, -1));
        for(int i = 0; i < n; i++){
            int cnt = people[i][1];
            for(int j = 0; j < n; j++){
                if(ans[j][0] == -1 && cnt == 0){
                    ans[j][0] = people[i][0];
                    ans[j][1] = people[i][1];
                    break;
                }else if(ans[j][0] == -1 or ans[j][0] >= people[i][0]){
                    cnt--;
                }
            }
        }
        return ans;
    }
};