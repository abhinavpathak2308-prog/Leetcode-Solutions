class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        minprice = prices[0]
        maxprofit = 0
        for i in prices:
            if i<minprice:
                minprice=i
            if i-minprice>maxprofit:
                maxprofit=i-minprice    
        return maxprofit
        if maxprofit==0:
            return 0
