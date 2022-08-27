class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> frq;
        for(auto &n : answers) frq[n]++;
        int rabbit = 0;
        while(!frq.empty()){
            auto p = *frq.begin();
            int num = p.first;
            int freq = p.second;
            // cout<<num<<" "<<freq<<endl;
            frq.erase(frq.begin());
            if(freq > 0){
                freq -= num+1;
                rabbit += num+1;
                // cout<<rabbit<<endl;
            }else{
                freq = 0;
            }
            if(freq > 0) frq[num] = freq;
        }
        return rabbit;
    }
};