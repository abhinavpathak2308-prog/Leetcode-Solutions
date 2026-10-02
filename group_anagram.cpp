class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>h;
        for (string i:strs){
            string l=i;
            sort(l.begin(),l.end());
            h[l].push_back(i);
        }
        vector<vector<string>>a;
        for (auto& pair:h){
            a.push_back(pair.second);
        }
        return a;
    }
};