class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        sum_ = 0
        ans = 0
        mp = {0: 1}  # \U0001f448 initialize with prefix sum 0

        for num in nums:
            sum_ += num
            if (sum_ - k) in mp:
                ans += mp[sum_ - k]
            if sum_ in mp:
                mp[sum_] += 1
            else:
                mp[sum_] = 1

        return ans
