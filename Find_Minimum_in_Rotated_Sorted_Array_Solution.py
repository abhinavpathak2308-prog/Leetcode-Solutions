class Solution:
    def findMin(self, nums: list[int]) -> int:
        start=1
        last=len(nums)-1
        a=nums[0]
        if nums[last]>=nums[0]:
            return nums[0]
        while start<=last:
            mid=start+(last-start)//2
            if nums[mid]>nums[mid-1] and nums[mid]>a:
                start=mid+1
            elif nums[mid]>nums[mid-1] and nums[mid]<a:
                last=mid-1
            else:
                return nums[mid]