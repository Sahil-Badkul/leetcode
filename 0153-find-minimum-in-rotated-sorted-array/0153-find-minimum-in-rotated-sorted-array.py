class Solution:
    def findMin(self, nums: List[int]) -> int:
        low = 0
        high = len(nums)-1
        while low <= high:
            mid = (low + high) // 2
            if nums[low] <= nums[mid]:
                if nums[mid] <= nums[high]:
                    high = mid-1
                else:
                    low = mid+1
            else:
                if nums[mid] < nums[high]:
                    high = mid
                else:
                    low = mid
        return nums[low]