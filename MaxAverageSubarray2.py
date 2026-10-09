class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        a=s=sum(nums[:k])
        for j in range(k,len(nums)):
            s+=nums[j]
            s-=nums[j-k]
            a=max(a,s)
        return a/k