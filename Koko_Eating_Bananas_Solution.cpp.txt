class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long start=1;
        long long last=*max_element(piles.begin(),piles.end());
        long long res=last;
        while (start<=last){
            long long mid=start+(last-start)/2;
            long long a=0;
            for (int i=0; i<piles.size(); i++){
                if (piles[i]%mid==0){
                    a+=piles[i]/mid;
                }else{
                    a+=piles[i]/mid+1;
                }
            }
            if (a>h){
                start=mid+1;
            }else{
                res=min(res,mid);
                last=mid-1;
            }
        }
        return res;
    }
};