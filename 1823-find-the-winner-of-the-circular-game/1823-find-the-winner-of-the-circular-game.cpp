class Solution {
public:
    /*
    // Queue 
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i = 1; i <= n; i++){
            q.push(i);
        }
        while(q.size() != 1){
            int x = k;
            while(x > 1){
                int front = q.front();
                q.pop();
                q.push(front);
                x--;
            }
            q.pop();
        }
        return q.front();
    }
    // TC : O(n*k), SC:O(n);
    */
    /*
    // Recursive
    int helper(int n, int k){
        if(n == 1) return 0;
        return (helper(n-1, k) + k) % n;
    }
    int findTheWinner(int n, int k){
        return helper(n,k)+1;
    }
    //TC : O(n), SC : O(n);
    */
    //Iterative
    int helper(int n, int k){
        int ans = 0;
        for(int i = 1; i <= n; i++){
            ans = (ans + k) % i;
        }
        return ans;
    }
    int findTheWinner(int n, int k){
        return helper(n,k)+1; // +1, bcaz index are 0 based
    }
};
