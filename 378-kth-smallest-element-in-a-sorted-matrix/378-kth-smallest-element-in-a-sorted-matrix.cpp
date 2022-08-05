class Solution {
public:
    /*
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // using heap   --> TC : O(N^2), SC : O(k)
        priority_queue<int> pq;
        for(auto &arr : matrix){
            for(auto &ele : arr){
                pq.push(ele);
                if(pq.size() > k){
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
    */
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // using binary search  -- TC : O(NlogN), SC : O(1)
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];
        int cnt = 0, mid = low;
        while(low < high){
            mid = low + (high - low) / 2;
            cnt = 0;
            for(int i = 0; i < matrix.size(); i++){
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(cnt < k) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};