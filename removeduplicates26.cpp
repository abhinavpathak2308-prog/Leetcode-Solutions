class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        int k=s.size();
        nums.assign(s.begin(), s.end());
        return k;
    }
};