class Solution:
    def canJump(self, nums: list[int]) -> bool:
        a=0
        for i in range(0,len(nums)):
            if i>a:
                return False
            a=max(a,i+nums[i])
            if a>=len(nums)-1:
                return True
        return True