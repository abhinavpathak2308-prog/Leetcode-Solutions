class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int last=accumulate(weights.begin(),weights.end(),0);
        int res=last;
        while (start<=last){
            int mid=start+(last-start)/2;
            int w=0;
            int d=0;
            for (int i:weights){
                w+=i;
                if (w>mid){
                    d+=1;
                    w=i;
                }
            }
            if (w!=0){
                d+=1;
            }
            if (d>days){
                start=mid+1;
            }else{
                res=min(res,mid);
                last=mid-1;
            }
        }
        return res;
    }
};