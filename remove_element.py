class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        s=[]
        nums.sort()
        for i in range(0,len(nums)):
            if nums[i]==val:
                s.append(i)
        if len(s)!=0:
            del nums[s[0]:s[len(s)-1]+1]
        k=len(nums)
        return k