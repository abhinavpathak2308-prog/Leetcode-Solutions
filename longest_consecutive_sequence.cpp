class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for (int i:nums){
            s.insert(i);
        }
        int m=0;
        for (int i:s){
            int c=0;
            if (s.find(i-1)==s.end()){
                c++;
                int a=i;
                while(s.find(a+1)!=s.end()){
                    c++;
                    a++;
                }
            }
            if (c>m){
                m=c;
            }
        }
        return m;
    }
};