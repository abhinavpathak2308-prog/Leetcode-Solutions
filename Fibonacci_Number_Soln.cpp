class Solution {
public:
    int fib(int n) {
        if (n<=1){
            return n;
        }
        int one=0;
        int second=1;
        int sum=0;
        for (int i=1;i<n;i++){
            sum=one+second;
            one=second;
            second=sum;
        }
        return sum;
    }
};