class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        s=set(nums)
        l=list(s)
        if len(l)==len(nums):
            return False
        else:
            return True