class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        start=1
        last=max(piles)
        res=last
        while start<=last:
            mid=start+(last-start)//2
            a=0
            for i in piles:
                if i%mid==0:
                    a+=i//mid
                else:
                    a+=i//mid+1
            if a>h:
                start=mid+1
            else:
                res=min(res,mid)
                last=mid-1
        return res