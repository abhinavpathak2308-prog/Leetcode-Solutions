class Solution:
    def maxArea(self, height: list[int]) -> int:
        left=0
        right=len(height)-1
        ma=0
        while left<right:
            area=(right-left)*min(height[right],height[left])
            if area>ma:
                ma=area
            if height[left]>height[right]:
                right-=1
            else:
                left+=1
        return ma