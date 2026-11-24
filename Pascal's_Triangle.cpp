class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for (int i=0;i<numRows;i++){
            vector<int> v(i+1);
            v[0]=1;
            for (int j=1;j<i;j++){
                v[j]=(res[i-1][j-1]+res[i-1][j]);
            }
            if (i>0){
                v[i]=1;
            }
            res[i]=(v);
        }
        return res;
    }
};