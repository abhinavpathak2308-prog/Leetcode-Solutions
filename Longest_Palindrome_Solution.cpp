class Solution {
public:
    int longestPalindrome(string s) {
        int a6=0;
        int a1=0;
        vector<int>v(128,0);
        for (char i:s){
            v[static_cast<unsigned char>(i)]++;
        }
        for (int i:v){
            if (i/2>0 && i%2==0){
                a1+=i;
            }if(i/2>0 && i%2!=0){
                a1+=i-1;
                a6++;
            }if(i/2==0 && i%2==1){
                a6++;
            }
        }
        if (a6>0){
            return a1+1;
        }else{
            return a1;
        }
    }
};