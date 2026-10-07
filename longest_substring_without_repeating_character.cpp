class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0){
            return 0;
        }
        unordered_map<char,int>h;
        int i=0;
        int c=1;
        for (int j=0; j<s.size(); j++){
            if (h.count(s[j]) && h[s[j]]>=i){
                i = h[s[j]] + 1;
            }
            h[s[j]] = j;
            int a=j-i+1;
            if (a>c){
                c=a;
            }
        }
        return c;
    }
};