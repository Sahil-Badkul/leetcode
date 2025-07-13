class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        st = []
        res = []
        for ch in s: 
            if ch == '(':
                st.append(ch)
            else:
                if len(st) > 1:
                    pair = st.pop() + ch
                    if len(st) > 1:
                        lst = st.pop()
                        lst += pair
                        st.append(lst)
                    else:
                        res.append(pair)
                else:
                    st.pop()
        return "".join(res)
