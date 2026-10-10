class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        if sum(nums)<target:
            return 0
        i=0
        s=0
        m=len(nums)
        for j in range(0,len(nums)):
            s+=nums[j]
            while s>=target:
                m=min(m,j-i+1)
                s-=nums[i]
                i+=1
        return m