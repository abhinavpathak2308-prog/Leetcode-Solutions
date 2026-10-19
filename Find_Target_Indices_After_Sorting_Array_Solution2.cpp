class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       vector<int>result;
       int a=0;
       int cnt=0;
       for (int i:nums){
        if (i==target){
            a+=1;
        }
        if (i<target){
            cnt+=1;
        }
       }
       for (int i=1;i<=a;i++){
        result.push_back(cnt+i-1);
       }
       return result;
    }
};