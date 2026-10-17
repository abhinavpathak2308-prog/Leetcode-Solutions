class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum>num*9){
            return "";
        }
        string x(num,'0');
        int z=sum/9;
        fill(x.begin(),x.begin()+z,'9');
        sum=sum-z*9;
        x[z]=sum+'0';
        return x;
    }
};