class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        start=0
        last=len(nums)-1
        a=-1
        result=[]
        while start<=last:
            mid=start+(last-start)//2
            if nums[mid]>target:
                last=mid-1
            elif nums[mid]<target:
                start=mid+1
            else:
                a=mid
                break
        if a==-1:
            result.append(-1)
            result.append(-1)
            return result
        start1=0
        start2=a
        last1=a
        last2=len(nums)-1
        stpos=len(nums)
        endpos=-1
        while start1<=last1:
            mid=start1+(last1-start1)//2
            if nums[mid]<target:
                start1=mid+1
            elif nums[mid]>target:
                last=mid-1
            else:
                stpos=min(stpos,mid)
                last1=mid-1
        while start2<=last2:
            mid=start2+(last2-start2)//2
            if nums[mid]>target:
                last2=mid-1
            elif nums[mid]<target:
                start2=mid+1
            else:
                endpos=max(endpos,mid)
                start2=mid+1
        result.append(stpos)
        result.append(endpos)
        return result