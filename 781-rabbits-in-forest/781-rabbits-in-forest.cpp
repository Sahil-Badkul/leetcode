class Solution {
public:
    int numRabbits(vector<int>& answers) {
        // map to store freq;
        unordered_map<int,int> frq;
        for(auto &n : answers) frq[n]++;
        int rabbit = 0;
        for(auto &it : frq){
            rabbit += (it.second + it.first) / (it.first+1) * (it.first+1);
        }
        return rabbit;
    }
};