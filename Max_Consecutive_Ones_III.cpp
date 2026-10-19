class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int m=0;
        int i=0;
        for (int j=0; j<nums.size(); j++){
            if (nums[j]==0){
                    k-=1;
                }
            while (k<0){
                if (nums[i]==0){
                    k++;
                }
                i++;
            }
            m=max(m,j-i+1);
        }
        return m;
    }
};