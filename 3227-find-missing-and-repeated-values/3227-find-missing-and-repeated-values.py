class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        mp = {}
        for nums in grid:
            for n in nums:
                if n in mp:
                    mp[n] += 1
                else:
                    mp[n] = 1

        ans = [-1, -1]     
        size = len(grid) * len(grid)
        for n in range(1, size+1):
            if n in mp and mp[n] == 2:
                ans[0] = n
            elif n not in mp:
                ans[1] = n
        return ans
        