class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=str(x)
        l=list(a)
        l1=list(a)
        l.reverse()
        if l1==l:
            return True
        else:
            return False