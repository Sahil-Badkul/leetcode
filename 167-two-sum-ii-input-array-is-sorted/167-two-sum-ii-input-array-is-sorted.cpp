class Solution {
public:
    // Using Two Pointer
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while(i < j){
            int sum = numbers[i]+numbers[j];
            if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }else{
                return {i+1, j+1};
            }
        }
        // not found 
        return {};
    }
    /*
    // Using binary search
    int binSearch(vector<int> &arr,int key, int l, int r){
        while(l <= r){
            int mid = l + (r-l)/2;
            if(arr[mid] < key){
                l = mid+1;
            }else if(arr[mid] > key){
                r = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n-1; i++){
            int s = binSearch(numbers, target-numbers[i], i+1, n-1);
            if(s != -1){
                return {i+1, s+1};
            }
        }
        return {-1,-1};
    }
    */
    
};