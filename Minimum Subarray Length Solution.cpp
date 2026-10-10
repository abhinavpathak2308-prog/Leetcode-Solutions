class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      if (accumulate(nums.begin(),nums.end(),0LL)<target){
        return 0;
      }
      int i=0;
      int s=0;
      int m=nums.size();
      for (int j=0; j<nums.size(); j++){
        s+=nums[j];
        while(s>=target){
            m=min(m,j-i+1);
            s-=nums[i];
            i++;
        }
      }
      return m;
    }
};