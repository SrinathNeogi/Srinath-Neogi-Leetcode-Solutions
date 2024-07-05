class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //Reverse colum arrays;
        int f = 0;
        int l = n - 1;

        while(f < l)
        {
            for(int i=0; i<n; i++)
            {
                int temp = matrix[f][i];
                matrix[f][i] = matrix[l][i];
                matrix[l][i] = temp;
            }    
            f++;
            l--;
        }

        //Transpose.
        //Traverse in upper triangular matrix and swap [i][j] with [j][i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};
