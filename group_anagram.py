class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        d={}
        for i in strs:
            s="".join(sorted(i))
            if s not in d:
                d[s]=[]
            if s in d:
                d[s].append(i)
        a=[]
        for i in d:
            a.append(d[i])
        return a