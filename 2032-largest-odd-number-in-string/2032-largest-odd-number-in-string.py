class Solution:
    def isOdd(self, num):
        last = int(num[-1])
        return last % 2 != 0

    def largestOddNumberNavie(self, num: str) -> str:
        max_num = ""
        size = len(num)
        for i in range(size):
            new_num = ""
            for j in range(i, size):
                new_num += num[j]
                if self.isOdd(new_num):
                    if max_num == "":
                        max_num = new_num
                    elif int(new_num) > int(max_num):
                        max_num = new_num
        return max_num
        # TC: O(N^2)
        # SC: O(1)

    def largestOddNumber(self, num: str) -> str:
        for i in range(len(num)-1, -1, -1):
            if self.isOdd(num[i]):
                return num[:i+1]
        return ""