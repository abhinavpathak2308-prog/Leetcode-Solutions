class Solution {
public:
    bool canAliceWin(int n) {
        int alice=0;
        int bob=0;
        for (int i=10;i>=0;i--){
            if (n<i){
                if (i%2==0){
                    return false;
                }else{
                    return true;
                }
            }
            n=n-i;
        }
        return 0;
    }
};