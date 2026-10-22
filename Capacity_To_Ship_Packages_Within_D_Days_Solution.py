class Solution:
    def shipWithinDays(self, weights: list[int], days: int) -> int:
        start=max(weights)
        last=sum(weights)
        res=last
        while start<=last:
            mid=start+(last-start)//2
            w=0
            d=0
            for i in weights:
                w+=i
                if w>mid:
                    w=i
                    d+=1
            if w!=0:
                d+=1
            if d>days:
                start=mid+1
            else:
                res=min(res,mid)
                last=mid-1
        return res