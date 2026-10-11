class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,0);
        for (char i:s){
            v[i-'a']++;
        }
        for (char i:s){
            if (v[i-'a']==1){
                return s.find(i);
            }
        }
        return -1;
    }
};