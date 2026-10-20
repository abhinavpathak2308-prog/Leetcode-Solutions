class Solution:
    def search(self, nums: list[int], target: int) -> int:
        last=len(nums)-1
        if nums[0]<=nums[last]:
            start=0
            while start<=last:
                mid=start+(last-start)//2
                if nums[mid]>target:
                    last=mid-1
                elif nums[mid]<target:
                    start=mid+1
                else:
                    return mid
            return -1
        else:
            start=1
            fixpoint=0
            last1=0
            while start<=last:
                mid=start+(last-start)//2
                if nums[mid]>=nums[mid-1] and nums[mid]>nums[fixpoint]:
                    start=mid+1
                if nums[mid]<nums[mid-1]:
                    last1=mid-1
                    break
                if nums[mid]>=nums[mid-1] and nums[mid]<nums[fixpoint]:
                    last=mid-1
            start1=0
            start2=last1+1
            last2=len(nums)-1
            if target<=nums[last1] and target>=nums[start1]:
                while start1<=last1:
                    mid=start1+(last1-start1)//2
                    if nums[mid]>target:
                        last1=mid-1
                    elif nums[mid]<target:
                        start1=mid+1
                    else:
                        return mid
                return -1
            if target<=nums[last2] and target>=nums[start2]:
                while start2<=last2:
                    mid=start2+(last2-start2)//2
                    if nums[mid]>target:
                        last2=mid-1
                    elif nums[mid]<target:
                        start2=mid+1
                    else:
                        return mid
                return -1
        return -1