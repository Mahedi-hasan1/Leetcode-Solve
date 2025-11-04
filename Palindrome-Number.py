class Solution:
    def isPalindrome(self, x: int) -> bool:
        f = True
        y = str(x) # string y = to_string(x)
        n = len(y)

        for i in range(0, int(n/2)):
            #print(i, n-1-i)
            if y[i] != y[n-1-i] :
                return False

        return True 
