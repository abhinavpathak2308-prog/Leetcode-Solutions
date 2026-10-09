class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        s=0
        for i in range(0,k):
            s+=nums[i]
        a=s
        for j in range(k,len(nums)):
            s+=nums[j]
            s-=nums[j-k]
            a=max(a,s)
        return a/k