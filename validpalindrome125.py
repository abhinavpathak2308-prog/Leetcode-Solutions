class Solution:
    def isPalindrome(self, s: str) -> bool:
        a=s.lower()
        l=list(a)
        s1=[]
        s2=[]
        for i in l:
            if i in['0','1','2','3','4','5','6','7','8','9','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m']:
                s2.append(i)
        for i in l[::-1]:
            if i in['0','1','2','3','4','5','6','7','8','9','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m']:
                s1.append(i)
        if s1==s2:
            return True
        else:
            return False