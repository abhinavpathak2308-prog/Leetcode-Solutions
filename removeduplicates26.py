class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        s=set(nums)
        s1=sorted(s)
        nums.clear()
        for i in s1:
            nums.append(i)
        k=len(nums)
        return k