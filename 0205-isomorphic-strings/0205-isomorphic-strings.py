class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False  # Different lengths can't be isomorphic

        lookupS = {}  # Maps characters in s → t
        lookupT = {}  # Maps characters in t → s (reverse mapping for validation)

        # Iterate over both strings in parallel
        for ch1, ch2 in zip(s, t):
            if ch1 in lookupS:
                # ch1 was already mapped → check if it's still consistent
                if lookupS[ch1] != ch2:
                    return False  # Inconsistent mapping (e.g., 'e' → 'a' and now trying 'e' → 'b')
            else:
                # ch1 is not yet mapped
                if ch2 in lookupT:
                    return False  # ch2 is already mapped to a different ch1 → violates one-to-one mapping
                # Safe to map
                lookupS[ch1] = ch2
                lookupT[ch2] = ch1

        return True  # All characters mapped consistently
