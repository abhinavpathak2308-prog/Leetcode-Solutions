class Solution:
    def maxSumOfSquares(self, num: int, sum: int) -> str:
        if sum>num*9:
            return ""
        x=""
        if sum>=9:
            z=sum//9
            z1='9'*z
            x=x+z1
            num-=z
            sum-=z*9
        if 0<sum and sum<9:
            x=x+str(sum)
            sum=0
            num-=1
        if sum==0:
            z2='0'*num
            x=x+z2
        return x