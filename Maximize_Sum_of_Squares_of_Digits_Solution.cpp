class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum>num*9){
            return "";
        }
        string x="";
        if (sum>=9){
            int z=sum/9;
            string z1(z,'9');
            x=x+z1;
            num-=z;
            sum-=z*9;
        }
        if(0<sum && sum<9){
            x=x+to_string(sum);
            sum=0;
            num-=1;
        }
        if (sum==0){
            string z2(num,'0');
            x=x+z2;
        }
        return x;
    }
};