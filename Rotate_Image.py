class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        copy=[row[:] for row in matrix]
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[0])):
                matrix[i][j]=copy[len(matrix)-j-1][i]