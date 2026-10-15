class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int l=0;
        int a=0;
        for (char i:s){
            if (i=='R'){
                r+=1;
            }else{
                l+=1;
            }
            if (r==l){
                a+=1;
                r=0;
                l=0;
            }
        }
        return a;
    }
};