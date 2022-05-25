

//Use this as the solution for the leetcode problem. We are traversing the matrix. 


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool val;
        int row= matrix.size();
        int col=matrix[0].size();
        for(int i=0; i<row; i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==target){
                    val=true;
                    return val;
                }
            }
        }
        val=false;
        return val;
    }
};
