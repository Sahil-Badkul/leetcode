class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_map<int,int> v;
        queue<pair<int,int>> q; 
        for(auto i:forbidden){
            v[i]=true;
        }
        q.push({0,0}) ; 
        int ans = 0;
        while(!q.empty()){
            int size = q.size() ;
            while(size--){
                auto curr = q.front() ;
                q.pop() ;
                int num = curr.first;
                if(num == x){
                    return ans;
                }
               
                if(v[num] == true){
                    continue;
                } 
                v[num]=true;
                if(curr.second == 0 && num-b>=0) {
                    q.push({(num-b),1});
                }
                if(num <= 2000+b){
                    q.push({(num+a),0});                 
                }
            }
            ans++;
        }
        return -1;
    }
};