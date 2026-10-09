class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0;
        for (int i=0; i<k; i++){
            s+=nums[i];
        }
        int a=s;
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