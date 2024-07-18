class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        //Check each row and if the first element of the row is 0 then flip the row.
        for(int i=0; i<rows; i++)
        {
            if(grid[i][0] == 0)
            {
                //Flip Row
                for(int j=0; j<cols; j++)
                {
                    if(grid[i][j] == 0)
                    {
                        grid[i][j] = 1;
                    }
                    else
                    {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        // If no of zeros is greater than no of ones in a column , flip the column.
        for(int j=0; j<cols; j++)
        {
            int no0 = 0;
            int no1 = 0;
            for(int i=0; i<rows; i++)
            {
                if(grid[i][j] == 0)
                {
                    no0 ++;
                }
                else
                {
                    no1 ++;
                }
            }
            //Perform flip column if no0 > no1
            if(no0 > no1)
            {
                for(int i=0; i<rows; i++)
                {
                    if(grid[i][j] == 0)
                    {
                        grid[i][j] = 1;
                    }
                    else
                    {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        //Flipping is done , now count the score. Take every row as binary number and convert them and them sum them
        int sum = 0;
        for(int i=0; i<rows; i++)
        {
            int x = 1;

            for(int j=(cols-1); j>=0; j--)
            {
                sum += grid[i][j] * x;
                x *= 2;
            }
        }
        return sum;
    }
};
