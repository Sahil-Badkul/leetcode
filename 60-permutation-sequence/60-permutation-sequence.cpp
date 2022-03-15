class Solution {
public:
    string getPermutation(int n, int k){
        vector<int> nums;
        int fact = 1;
        for(int i = 1; i < n; i++){
            fact *= i;
            nums.push_back(i);
        }
        nums.push_back(n);
        // We are considaring 0 based indexing.
        k--;
        string ans = "";
        while(true){
            ans += to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size() == 0) break;
            k %= fact;
            fact = fact/nums.size();
        }
        return ans;
    }
    /*
    // Naive solution gives TLE
    void helper(int idx, string &p, vector<string> &per){
        if(idx == p.size()){
            per.push_back(p);
            return;
        }
        for(int i = idx; i < p.size(); i++){
            swap(p[i], p[idx]);
            helper(idx+1, p, per);
            swap(p[i], p[idx]);
        }
    }
    string getPermutation(int n, int k) {
        string p = "";
        for(int i = 1; i <= n; i++){
            p += to_string(i);
        }
        vector<string> per;        
        helper(0,p,per);
        sort(per.begin(), per.end());
        return per[k-1];
    }
    */
};