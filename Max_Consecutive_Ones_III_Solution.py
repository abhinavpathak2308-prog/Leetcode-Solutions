class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        i=0
        m=0
        for j in range(0,len(nums)):
            if nums[j]==0:
                k-=1
            while k<0:
                if nums[i]==0:
                    k+=1
                i+=1
            m=max(m,j-i+1)
        return m