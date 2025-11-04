class Solution:

    def isMatching(a: str,b : str) -> bool:
        if a == "(" and b == ")":
            return True
        if a == "{" and b == "}":
            return True
        if a == "[" and b == "]":
            return True
        return False

    def isValid(self, s: str) -> bool:
        st = []
        
        for i in range(0, len(s)):
            if len(st)>=1 :
                #print(i, st[-1])
                if Solution.isMatching(st[-1],s[i]):
                    st.pop()
                else:
                    st.append(s[i])
                #print (i, len(st))
            else:
                st.append(s[i])

        if len(st) >=1 :
            return False
        else :
            return True