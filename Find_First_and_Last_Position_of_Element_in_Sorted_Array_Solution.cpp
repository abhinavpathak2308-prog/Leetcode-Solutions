class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int last=nums.size()-1;
        vector<int>result;
        int a=-1;
        while (start<=last){
            int mid=start+(last-start)/2;
            if (nums[mid]>target){
                last=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                a=mid;
                break;
            }
        }
        if (a==-1){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int start1 = 0;
        int start2 = a;
        int last1=a;
        int last2=nums.size()-1;
        int stpos=nums.size();
        int endpos=-1;
        while (start1<=last1){
            int mid=start1+(last1-start1)/2;
            if (nums[mid]>target){
                last1=mid-1;
            }else if (nums[mid]<target){
                start1=mid+1;
            }else{
                stpos=min(stpos,mid);
                last1=mid-1;
            }
        }
        while (start2<=last2){
            int mid=start2+(last2-start2)/2;
            if (nums[mid]>target){
                last2=mid-1;
            }else if (nums[mid]<target){
                start2=mid+1;
            }else{
                endpos=max(endpos,mid);
                start2=mid+1;
            }
        }
        result.push_back(stpos);
        result.push_back(endpos);
        return result;
    }
};