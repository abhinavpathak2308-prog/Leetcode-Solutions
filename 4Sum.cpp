class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if (i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            for (int j=i+1;j<nums.size();j++){
                if (j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                vector<int>l;
                int left=j+1;
                int right=nums.size()-1;
                while (left<right){
                    if ((long long)nums[i]+nums[j]+nums[left]+nums[right]>target){
                        right--;
                    }
                    else if ((long long)nums[i]+nums[j]+nums[left]+nums[right]<target){
                        left++;
                    }
                    else{
                        l.push_back(nums[i]);
                        l.push_back(nums[j]);
                        l.push_back(nums[left]);
                        l.push_back(nums[right]);
                        ans.push_back(l);
                        l.clear();
                        left++;
                        right--;
                        while (left<right && nums[left]==nums[left-1]){
                            left++;
                        }
                        while (left<right && nums[right]==nums[right+1]){
                            right--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};