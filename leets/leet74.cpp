class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        for(int i=0;i<rows;i++)
        {
            int cols = matrix[i].size();
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j] == target){
                    return true;
                }    
            }
        }
        return false;
    }
};