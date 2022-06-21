class Solution {
public:
    int furthestBuilding(vector<int>& H, int bricks, int ladders) {
        priority_queue<int> pq;
        for(int i = 0; i < H.size()-1; i++){
            int diff = H[i+1] - H[i];
            if(diff > 0){
                pq.push(-diff);
            }
            if(pq.size() > ladders){
                bricks += pq.top();
                pq.pop();
            }
            if(bricks < 0){
                return i;
            }
        }
        return H.size() - 1;
    }
};
/*
Diff arr
5 5 3
if size(pq) > ladders
    bricks -= shortest hight
if(brricks < 0)
    return i
*/