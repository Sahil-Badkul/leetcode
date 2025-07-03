class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        curr = nums[0]
        cnt = 0
        for n in nums:
            if(n == curr):
                cnt += 1
            elif(cnt == 0):
                curr = n
                cnt = 1
            else:
                cnt -= 1
        return curr