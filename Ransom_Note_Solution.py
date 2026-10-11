class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        l=[0]*26
        for i in magazine:
            l[ord(i)-ord("a")]+=1
        for i in ransomNote:
            l[ord(i)-ord("a")]-=1
            if l[ord(i)-ord("a")]<0:
                return False
        return True