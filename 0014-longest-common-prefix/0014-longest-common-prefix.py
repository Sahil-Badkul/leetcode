class Solution:
    def makeLCP(self, prefix, word):
        # res = ""
        # firstLen, secondLen = len(first), len(second)
        # for i in range(min(firstLen, secondLen)):
        #     if first[i] == second[i]:
        #         res += first[i]
        #     else:
        #         break
        # return res
        while word.find(prefix) != 0: # We will get 0 if there is prefix at start 0th idx
            prefix = prefix[0 : len(prefix)-1]
        return prefix

    def longestCommonPrefix(self, strs: List[str]) -> str:
        LCP = strs[0]
        for word in strs[1:]:
            LCP = self.makeLCP(LCP, word)
            if LCP == "":
                break
        return LCP