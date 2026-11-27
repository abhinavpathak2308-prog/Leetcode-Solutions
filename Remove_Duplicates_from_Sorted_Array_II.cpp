class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=nums[0];
        int c=0;
        int k=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==a){
                if (c<2){
                    c++;
                    k++;
                }else{
                    nums[i]=100000;
                }
            }else{
                a=nums[i];
                c=1;
                k++;
            }
        }
        sort(nums.begin(),nums.end());
        return k;
    }
};