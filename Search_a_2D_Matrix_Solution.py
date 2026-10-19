class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        start=0
        last=len(matrix)*len(matrix[0])-1
        while start<=last:
            mid=start+(last-start)//2
            val=matrix[mid//len(matrix[0])][mid%len(matrix[0])]
            if val<target:
                start=mid+1
            elif val>target:
                last=mid-1
            else:
                return True
        return False