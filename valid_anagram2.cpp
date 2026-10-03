class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>h;
        unordered_map<char,int>h1;
        for (char i:s){
            if (h.find(i)!=h.end()){
                h[i]+=1;
            }else{
                h[i]=1;
            }
        }
        for (char i:t){
            if (h1.find(i)!=h.end()){
                h1[i]+=1;
            }else{
                h1[i]=1;
            }
        }
        if (h==h1){
            return true;
        }else{
            return false;
        }
    }
};