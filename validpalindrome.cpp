class Solution {
public:
    bool isPalindrome(string s) {
       std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
        return std::tolower(c);
       });
       std::vector<char> a(s.begin(), s.end());
       std::vector<char>s1;
       std::vector<char>s2;
       for (char i:a){
        if ((i>='0' && i<='9') || (i>='a' && i<='z')){
            s1.push_back(i);
        }
       }
       for (int i=a.size()-1; i>=0; i--){
        if ((a[i]>='0' && a[i]<='9') || (a[i]>='a' && a[i]<='z')){
            s2.push_back(a[i]);
        }
       }
       if (s1==s2){
        return true;
       }else{
        return false;
       }
    }
};