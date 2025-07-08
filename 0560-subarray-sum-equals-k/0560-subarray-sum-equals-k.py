class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = {} #to store all the previous sum to find sum-k, this will store sum: cnt
        ans = 0
        curr_sum = 0
        for n in nums:
            curr_sum += n
            if curr_sum == k:
                ans += 1
            if curr_sum - k in mp:
                ans += mp[curr_sum - k]
            if curr_sum in mp:
                mp[curr_sum] += 1
            else:
                mp[curr_sum] = 1
        return ans