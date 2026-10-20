class Solution {
public:
    int search(vector<int>& nums, int target) {
        int last=nums.size()-1;
        if (nums[0]<=nums[last]){
            int start=0;
            while (start<=last){
                int mid=start+(last-start)/2;
                if (nums[mid]>target){
                    last=mid-1;
                }else if (nums[mid]<target){
                    start=mid+1;
                }else{
                    return mid;
                }
            }
            return -1;
        }else{
            int start=1;
            int fixpoint=0;
            int last1=0;
            while (start<=last){
                int mid=start+(last-start)/2;
                if (nums[mid]>=nums[mid-1] && nums[mid]>nums[fixpoint]){
                    start=mid+1;
                }
                if(nums[mid]<nums[mid-1]){
                    last1=mid-1;
                    break;
                }
                if(nums[mid]>=nums[mid-1] && nums[mid]<nums[fixpoint]){
                    last=mid-1;
                }
            }
            int start1=0;
            int start2=last1+1;
            int last2=nums.size()-1;
            if (target<=nums[last1] && target>=nums[start1]){
                while (start1<=last1){
                    int mid=start1+(last1-start1)/2;
                    if (nums[mid]>target){
                        last1=mid-1;
                    }else if(nums[mid]<target){
                        start1=mid+1;
                    }else{
                        return mid;
                    }
                }
                return -1;
            }
            if (target<=nums[last2] && target>=nums[start2]){
                while (start2<=last2){
                    int mid=start2+(last2-start2)/2;
                    if (nums[mid]>target){
                        last2=mid-1;
                    }else if(nums[mid]<target){
                        start2=mid+1;
                    }else{
                        return mid;
                    }
                }
                return -1;
            }
        }
        return -1;
    }
};