class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int>h;
        for (int i=0; i<nums.size(); i++){
            h[nums[i]]=i;
        }
        for (int i=0; i<nums.size(); i++){
            int k=target-nums[i];
            if (h.find(k)!=h.end() && h[k]!=i){
                return {i,h[k]};
            }
        }
        return {};
    }
};