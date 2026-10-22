class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int last=*max_element(nums.begin(),nums.end());
        int res=last;
        while (start<=last){
            int mid=start+(last-start)/2;
            int x=0;
            for (int i:nums){
                if (i%mid>0){
                    x+=i/mid+1;
                }else{
                    x+=i/mid;
                }
            }
            if (x>threshold){
                start=mid+1;
            }else{
                res=min(res,mid);
                last=mid-1;
            }
        }
        return res;
    }
};