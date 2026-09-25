class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i:nums){
            if (i==0){
                std::vector<int>::iterator k = std::find(nums.begin(),nums.end(),i);
                nums.erase(k);
                nums.push_back(0);
            }
        }
        return;
    }
};