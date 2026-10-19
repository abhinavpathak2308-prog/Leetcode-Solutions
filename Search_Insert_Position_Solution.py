class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        start=0
        last=len(nums)-1
        while start<=last:
            mid=start+(last-start)//2
            if nums[mid]>target:
                last=mid-1
            elif nums[mid]<target:
                start=mid+1
            else:
                return mid
        return start