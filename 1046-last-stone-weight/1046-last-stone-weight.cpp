class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto &stone : stones){
            pq.push(stone);
        }
        while(true){
            if(pq.size() == 1) break;
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y == x){
                if(pq.empty()){
                    return 0;
                }
                continue;
            }
            else{
                pq.push(y-x);
            }
        }
        return pq.top();
    }
};