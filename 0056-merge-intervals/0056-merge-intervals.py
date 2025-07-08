class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        result = [intervals[0]]
        for interval in intervals[1:]:
            # print(interval)
            prev_interval = result[-1]
            if(prev_interval[1] >= interval[0]):
                # print("interval")
                prev_interval[1] = max(interval[1],  prev_interval[1])
                result[-1] = prev_interval
            else: # appending current interval into result
                # print(interval)
                result.append(interval)
        return result