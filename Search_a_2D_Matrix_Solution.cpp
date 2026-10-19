class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int last=(matrix.size()*matrix[0].size())-1;
        while (start<=last){
            int mid=start+(last-start)/2;
            int val=matrix[mid/matrix[0].size()][mid%matrix[0].size()];
            if (val>target){
                last=mid-1;
            }else if(val<target){
                start=mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
};