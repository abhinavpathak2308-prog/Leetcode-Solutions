class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int s=0;
        unordered_map<int,int>h;
        for (int i=0; i<nums.size(); i++){
            h[nums[i]]=i;
        }
        for (int i=0; i<nums.size(); i++){
            if (h.find(nums[i])!=h.end() && h[nums[i]]!=i){
                return true;
                break;
                s+=1;
            }
        }
        if (s==0){
            return false;
        }
        return true;
    }
};