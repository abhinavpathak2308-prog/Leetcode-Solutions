class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v1(26,0);
        for (int i=0;i<s.size();i++){
            v1[s[i]-'a']=i;
        }
        vector<int>v;
        int i=0;
        int j=v1[s[i]-'a'];
        int st=0;
        while (i<s.size() && j<s.size()){
            if (v1[s[i]-'a']>j){
                j=v1[s[i]-'a'];
            }
            if (i==j){
                v.push_back(j-st+1);
                st=i+1;
                if (j!=s.size()-1){
                    j=v1[s[i+1]-'a'];
                }
            }
            i++;
        }
        return v;
    }
};