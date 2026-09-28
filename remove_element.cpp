class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::vector<int>s;
        std::sort(nums.begin(),nums.end());
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==val){
                s.push_back(i);
            }
        }
        int l=s.size();
        if (s.size()!=0){
            nums.erase(nums.begin()+s[0],nums.begin()+s[s.size()-1]+1);
        }
        int k=nums.size();
        return k;
    }
};