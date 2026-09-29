class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if n!=0:
            del nums1[m:m+n]
            for i in nums2:
                nums1.append(i)
        nums1.sort()