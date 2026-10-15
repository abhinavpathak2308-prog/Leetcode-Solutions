class Solution:
    def balancedStringSplit(self, s: str) -> int:
        r=0
        l=0
        a=0
        for i in s:
            if i=='R':
                r+=1
            else:
                l+=1
            if r==l:
                a+=1
                r=0
                l=0
        return a