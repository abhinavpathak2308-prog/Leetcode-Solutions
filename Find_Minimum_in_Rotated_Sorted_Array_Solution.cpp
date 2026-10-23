class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=1;
        int last=nums.size()-1;
        int a=nums[0];
        if (nums[last]>=nums[0]){
            return nums[0];
        }else{
            while (start<=last){
                int mid=start+(last-start)/2;
                if (nums[mid]>nums[mid-1] && nums[mid]>a){
                    start=mid+1;
                }else if (nums[mid]>nums[mid-1] && nums[mid]<a){
                    last=mid-1;
                }else{
                    return nums[mid];
                }
            }
        }
        return 0;
    }
};