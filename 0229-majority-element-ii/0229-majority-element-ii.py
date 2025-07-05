class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        mp = {}
        size = len(nums)
        for n in nums:
            if n in mp:
                mp[n] += 1
            else:
                mp[n] = 1
        res = [n for n, f in mp.items() if f > size//3]
        return res