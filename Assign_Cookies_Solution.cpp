class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int x=0;
        int a=0;
        int i=0;
        while (a<g.size() && i<s.size()){
            if (s[i]>=g[a]){
                x+=1;
                a++;
            }
            i++;
        }
        return x;
    }
};