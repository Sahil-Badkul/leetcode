class Solution {
public:
    bool canChange(string start, string target) {
        // check for equal L & R
        unordered_map<char, int> car1, car2;
        for(auto &ch : start) car1[ch]++;
        for(auto &ch : target) car2[ch]++;
        if(car1 != car2) return false;
        // car crash type
        int n = start.size();
        // check for R, move from right to left
        for(int i = n-1; i >= 0; i--){
            if(start[i] == target[i]) continue;
            char req = target[i];
            if(req == 'R'){
                int j = i;
                while(j >= 0 && start[j] == '_'){
                    start[j] = target[j];
                    j--;
                }
                if(j < 0 || start[j] == 'L') return false;
                start[j] = '_';
                i = j+1;
            }
        }
        // check for L, move from left to right
        for(int i = 0; i < n; i++){
            if(start[i] == target[i]) continue;
            char req = target[i];
            if(req == 'L'){
                int j = i;
                while(j < n && start[j] == '_'){
                    start[j] = target[j];
                    j++;
                }
                if(j == n || start[j] == 'R') return false;
                start[j] = '_';
                i = j-1;
            }
        }
        return true;
    }
};