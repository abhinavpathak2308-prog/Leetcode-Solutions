class Solution {
public:
    int findMin(vector<int>& nums) {
        int a=nums[0];
        int start=1;
        int last=nums.size()-1;
        if (nums.size()<=1){
            return nums[0];
        }
        if (nums[1]<nums[0]){
            return nums[1];
        }
        if (nums[0]<nums[nums.size()-1]){
            return nums[0];
        }else{
            while (start<=last){
                int mid=start+(last-start)/2;
                if (nums[mid]>nums[mid-1] && nums[mid]<a){
                    last=mid-1;
                }else if (nums[mid]>nums[mid-1] && nums[mid]>a){
                    start=mid+1;
                }else if(nums[mid]<nums[mid-1]){
                    return nums[mid];
                }else{
                    start++;
                }
            }
        }
        return *min_element(nums.begin(),nums.end());
    }
};