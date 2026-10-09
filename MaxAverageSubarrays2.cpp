class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s=accumulate(nums.begin(), nums.begin() + k, 0.0);
        double a=s;
        for (int j=k; j<nums.size(); j++){
            s+=nums[j];
            s-=nums[j-k];
            if (s>a){
                a=s;
            }
        }
        return (double)a/k;
    }
};