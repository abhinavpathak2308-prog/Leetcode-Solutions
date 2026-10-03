class Solution {
public:
    int reverse(int x) {
        int r=0;
        int a=0;
        if (x<0 && x!=-2147483648){
            x=-x;
            a=-1;
        }
        while (x>0){
            if (r>=-214748364 && r<=214748364){
                r=r*10+x%10;
                x=x/10;
            }else{
                return 0;
                break;
            }        
        }
        if (a<0){
            return -r;
        }
        else{
            return r;
        }
    }
};