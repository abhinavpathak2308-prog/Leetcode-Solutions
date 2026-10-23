class Solution {
public:
    bool check(vector<int>& nums) {
        int a=0;
        if (nums[0]<nums[nums.size()-1]){
            a+=1;
        }
        for (int i=1;i<nums.size();i++){
            if (nums[i-1]>nums[i]){
                a+=1;
            }
        }
        if (a>1){
            return false;
        }else{
            return true;
        }
    }
};