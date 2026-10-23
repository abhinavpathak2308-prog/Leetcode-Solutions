class Solution:
    def check(self, nums: list[int]) -> bool:
        a=0
        if nums[0]<nums[len(nums)-1]:
            a+=1
        for i in range (1,len(nums)):
            if nums[i-1]>nums[i]:
                a+=1
        if a>1:
            return False
        else:
            return True