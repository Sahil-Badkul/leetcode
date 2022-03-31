class Solution {
    public int[] getConcatenation(int[] nums)
    {
        int n = nums.length;
        int j = 2*n;
        int k =0;
        int arr[] = new int [j];
        for(int i =0;i<j;i++)
        {
            if(i<n)
            {
            arr[i] = nums[i];
            }
            else
            {
                arr[i] = arr[k];
                k++;
                
            }
            
        }
        return arr;
        
    }
}