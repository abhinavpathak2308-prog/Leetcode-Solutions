class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>h;
        for (int i=0; i<numbers.size(); i++){
            h[numbers[i]]=i;
        }
        for (int i=0; i<numbers.size(); i++){
            int k=target-numbers[i];
            if (h.find(k)!=h.end() && h[k]!=i){
                if (h[k]>i){
                    return {i+1,h[k]+1};
                }else{
                    return {h[k]+1,i+1};
                }
            }
        }
        return{};
    }
};