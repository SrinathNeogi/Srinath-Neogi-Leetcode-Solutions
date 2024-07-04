class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> transpose(col,vector<int>(row));
        /* 1 2 3
           4 5 6
           7 8 9
        */
        /* 1 4 7
           2 5 8
           3 6 9
        */

        for(int j=0; j<col; j++) //Column
        {
            for(int i=0; i<row; i++) // Row
            {
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
};
