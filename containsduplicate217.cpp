class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::map<int,int> h;
        for (int i=1; i<nums.size(); i++){
            h[nums[0]]=0;
            h[nums[i]]=i;
        }
        for (int i=1; i<nums.size(); i++){
            if (h[i]==h[i-1]){
                return true;
                break;
            }else{
                
            }
        }
        return false;
    }
};
