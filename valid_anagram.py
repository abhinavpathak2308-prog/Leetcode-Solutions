class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        else:
            a="".join(sorted(s))
            b="".join(sorted(t))
            if a==b:
                return True
            else:
                return False