class Solution {
public:
    
    int mod =(int)1e9+7;

    int findWays(vector<int> &num, int tar){
         int n = num.size();

        vector<int> prev(tar+1,0);

        if(num[0] == 0) prev[0] =2;  // 2 cases -pick and not pick
        else prev[0] = 1;  // 1 case - not pick

        if(num[0]!=0 && num[0]<=tar) prev[num[0]] = 1;  // 1 case -pick

        for(int ind = 1; ind<n; ind++){
            vector<int> cur(tar+1,0);
            for(int target= 0; target<=tar; target++){
                int notTaken = prev[target];

                int taken = 0;
                    if(num[ind]<=target)
                        taken = prev[target-num[ind]];

                cur[target]= (notTaken + taken)%mod;
            }
            prev = cur;
        }
        return prev[tar];
    }

    int countPartitions(int n, int d, vector<int>& arr){
        int totSum = 0;
        for(int i=0; i<n;i++){
            totSum += arr[i];
        }

        //Checking for edge cases
        if(totSum-d <0 || (totSum-d)%2 ) return 0;

        return findWays(arr,(totSum-d)/2);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums.size(), target, nums);
    }
};