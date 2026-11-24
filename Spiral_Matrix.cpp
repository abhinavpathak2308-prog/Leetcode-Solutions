class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>v(r*c);
        int a=0;
        int b=0;
        int x=0;
        while (x<matrix.size()*matrix[0].size()){
            if (x<matrix.size()*matrix[0].size()){
                for (int i=a;i<c;i++){
                    v[x]=matrix[a][i];
                    x++;
                }
                b++;
            }
            if (x<matrix.size()*matrix[0].size()){
                for (int i=b;i<r;i++){
                    v[x]=matrix[i][c-1];
                    x++;
                }
                c--;
            }
            if (x<matrix.size()*matrix[0].size()){
                for (int i=c-1;i>=a;i--){
                    v[x]=matrix[r-1][i];
                    x++;
                }
                r--;
            }
            if (x<matrix.size()*matrix[0].size()){
                for (int i=r-1;i>=b;i--){
                    v[x]=matrix[i][a];
                    x++;
                }
                a++;
            }
        }
        return v;
    }
};