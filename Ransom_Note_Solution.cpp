class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>v(26,0);
       int a=0;
       for (char i:ransomNote){
        v[i-'a']++;
       }
       for (char i:magazine){
        v[i-'a']--;
       }
       for (int i=0; i<26;i++){
        if (v[i]>0){
            a+=1;
        }
       }
       if (a>0){
        return false;
       }else{
        return true;
       }
    }
};