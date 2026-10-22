class Solution:
    def smallestDivisor(self, nums: list[int], threshold: int) -> int:
        start=1
        last=max(nums)
        res=last
        while start<=last:
            mid=start+(last-start)//2
            x=0
            for i in nums:
                if i%mid>0:
                    x+=i//mid+1
                else:
                    x+=i//mid
            if x>threshold:
                start=mid+1
            else:
                res=min(res,mid)
                last=mid-1
        return res