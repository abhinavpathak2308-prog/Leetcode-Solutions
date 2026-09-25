class Solution {
public:
    int maxProfit(vector<int>& prices) {
        double minprice=prices[0];
        double maxprofit = 0;
        for (int i=0 ; i<prices.size() ; i++){
            if (prices[i] < minprice){
                minprice = prices[i];
            }
            double profit = prices[i]-minprice;
            if (profit > maxprofit){
                maxprofit = profit;
            }
        }
        if (maxprofit == 0){
            return 0;
        }else{
            return maxprofit;
        }
    }
};