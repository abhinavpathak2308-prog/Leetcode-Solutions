class Solution:
    def longestPalindrome(self, s: str) -> int:
        a6=0
        a1=0
        l=[0]*128
        for i in s:
            l[ord(i)]+=1
        for i in l:
            if i//2>0 and i%2==0:
                a1+=i
            if i//2>0 and i%2!=0:
                a1+=i-1
                a6+=1
            if i//2==0 and i%2==1:
                a6+=1
        if a6>0:
            return a1+1
        else:
            return a1