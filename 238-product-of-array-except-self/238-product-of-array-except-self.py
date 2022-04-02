class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = 1
        n = len(nums)
        output = []
        #first build left product.
        for i in range(0,n):
            output.append(p)
            p = p * nums[i]
        p = 1
        # perform right product
        for i in range(n-1, -1, -1):
            output[i] = output[i] * p
            p = p * nums[i]
        return output
    
'''
dry run 
input
1 2 3 4 5 

p value 1 1 2 6 24 
output  1 1 2 6 24

p value 120
output  120 60 40 30 24
'''