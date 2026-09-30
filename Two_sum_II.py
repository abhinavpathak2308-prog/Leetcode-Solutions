class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        d={}
        for i in range(0,len(numbers)):
            d[numbers[i]]=i
        for i in range(0,len(numbers)):
            k=target-numbers[i]
            if k in d and d[k]!=i:
                if d[k]>i:
                    return[i+1,d[k]+1]
                else:
                    return[d[k]+1,i]