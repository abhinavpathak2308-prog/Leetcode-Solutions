class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        auto a=find(flowerbed.begin(),flowerbed.end(),1);
        if (a!=flowerbed.end()){
            i=a-flowerbed.begin();
        }else{
            i=0;
        }
        n=n-i/2;
        for (int j=i; j<flowerbed.size(); j++){
            if ((j+1>=flowerbed.size() || flowerbed[j+1]!=1) && (j==0 || flowerbed[j-1]!=1)){
                if (flowerbed[j]==0){
                    n-=1;
                    j++;
                }
            }
        }
        if (n<=0){
            return true;
        }else{
            return false;
        }
    }
};