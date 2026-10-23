class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v(nums.size());
        if (k>nums.size()){
            k=k%nums.size();
        }
        int j=0;
        for (int i=k;i>0;i--){
            v[j++]=nums[nums.size()-i];
        }
        for (int i=0;i<nums.size()-k;i++){
            v[j++]=nums[i];
        }
        nums.assign(v.begin(),v.end());
    }
};