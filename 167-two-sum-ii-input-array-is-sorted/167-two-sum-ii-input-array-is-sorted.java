class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i = 0, n = numbers.length, j = n-1;
        int sum = 0;
        int ans[] = new int[2];
        while(i < j){
            sum = numbers[i] + numbers[j];
            if(sum == target){
                ans[0] = i+1;
                ans[1] = j+1;
                return ans;
            }
            else if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }
        }
        return ans;
    }
}