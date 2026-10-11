class Solution:
    def firstUniqChar(self, s: str) -> int:
        l=[0]*26
        for i in s:
            l[ord(i)-ord('a')]+=1
        for i in range(0,len(s)):
            if l[ord(s[i])-ord('a')]==1:
                return i
        return -1