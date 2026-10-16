class Solution:
    def partitionLabels(self, s: str) -> list[int]:
        l1=[0]*26
        for i in range(0,len(s)):
            l1[ord(s[i])-ord('a')]=i
        l=[]
        i=0
        j=l1[ord(s[i])-ord('a')]
        st=0
        while i<len(s) and j<len(s):
            if l1[ord(s[i])-ord('a')]>j:
                j=l1[ord(s[i])-ord('a')]
            if i==j:
                l.append(j-st+1)
                st=i+1
                if j!=len(s)-1:
                    j=l1[ord(s[i+1])-ord('a')]
            i+=1
        return l