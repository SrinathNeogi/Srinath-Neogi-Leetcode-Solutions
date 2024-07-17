class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        for(int i=0; i<numRows; i++)
        {
            vector<int> temp;

            int current = 1; //Initialize current as 1 for each row updating loop

            for(int j=0; j<=i; j++)
            {
                temp.push_back(current);

                current = current * (i-j)/(j+1); //Updating Current with help of previous value
            }

            pascal.push_back(temp);
        }

        return pascal;
    }
};
//METHOD 2
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        for(int i=0; i<numRows; i++)
        {
            int temp_size = i+1;
            vector<int> temp(temp_size);

            pascal.push_back(temp);

            for(int j=0; j<=i; j++)
            {
                if(j == 0 || j == i)
                {
                    pascal[i][j] = 1;
                }
                else
                {
                    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
                }
            }
        }
        return pascal;
    }
};
