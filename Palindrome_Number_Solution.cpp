class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long long r=0;
        long long i=x;
        while (i>0){
            r=r*10+i%10;
            i=i/10;
        }
        if (x==r){
            return true;
        }else{
            return false;
        }
    }
};-