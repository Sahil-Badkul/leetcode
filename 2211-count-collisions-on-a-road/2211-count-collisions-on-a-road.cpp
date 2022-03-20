class Solution {
public:
    int countCollisions(string d){
        int ans = 0, x = 0, y = 0;
        for(auto c : d){
            if(c == 'L') ans += x;
            else x = 1;
        }
        reverse(d.begin(), d.end());
        for(auto c : d){
            if(c == 'R') ans += y;
            else y = 1;
        }
        return ans;
    }
    /*
    int countCollisions(string d) {
        int n = d.size();
        int coll = 0;
        for(int i = 0; i < n; i++){
            if(d[i] == 'L'){
                if(i-1 >= 0){
                    if(d[i-1] == 'R'){
                        coll += 2;
                        d[i] = d[i-1] = 'S';
                    }else if(d[i-1] == 'S') {
                        coll++;
                        d[i] = d[i-1] = 'S';
                    }
                }
            }else if(d[i] == 'R'){
                if(i+1 < n){
                    if(d[i+1] == 'L'){
                        coll += 2;
                        d[i] = d[i+1] = 'S';
                    }else if(d[i+1] == 'S') {
                        coll++;
                        d[i] = d[i+1] = 'S';
                    }
                    int j = i-1;
                    if(d[j+1] == 'S')   while(j >= 0 and d[j--] == 'R' ) coll++;
                }
            }
        }
        return coll;
    }
    */

};