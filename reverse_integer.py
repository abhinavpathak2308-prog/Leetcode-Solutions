class Solution:
    def reverse(self, x: int) -> int:
        r=0
        a=0
        if x<0 and x!=-2147483648:
            x=-x
            a=-1
        while x>0:
            if r<=214748364:
                r=r*10+x%10
                x=x//10
            else:
                return 0
        if a==-1:
            return -r
        else:
            return r