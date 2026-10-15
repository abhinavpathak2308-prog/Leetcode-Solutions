class Solution:
    def largestInteger(self, n: int, s: int) -> int:
        if (s>9*n):
            return -1
        a=0
        while n>0:
            if s>9:
                a=a*10+9
                s-=9
                n-=1
            elif s>0:
                a=a*10+s
                s=0
                n-=1
            else:
                a=a*10
                n-=1
        return a