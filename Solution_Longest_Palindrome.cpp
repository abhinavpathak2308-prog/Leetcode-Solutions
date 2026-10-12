class Solution {
public:
    int longestPalindrome(string s) {
        int a6=0;
        int a1=0;
        unordered_map<char,int>h;
        for (char i:s){
            h[i]++;
        }
        for (const auto&a2 : h){
            if (a2.second/2>0 && a2.second%2==0){
                a1+=a2.second;
            }else if(a2.second/2>0 && a2.second%2!=0){
                a1+=a2.second-1;
                a6++;
            }else{
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