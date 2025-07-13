class Solution:
    def makeLCP(self, first, second):
        res = ""
        firstLen, secondLen = len(first), len(second)
        for i in range(min(firstLen, secondLen)):
            if first[i] == second[i]:
                res += first[i]
            else:
                break
        return res

    def longestCommonPrefix(self, strs: List[str]) -> str:
        LCP = strs[0]
        for word in strs[1:]:
            LCP = self.makeLCP(LCP, word)
            if LCP == "":
                break
        return LCP