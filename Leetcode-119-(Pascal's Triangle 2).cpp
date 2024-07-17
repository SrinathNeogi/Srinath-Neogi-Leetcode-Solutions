class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row((rowIndex + 1),1);

        long long current = 1;

        for(int i=0; i<=rowIndex; i++)
        {
            row[i] = current;

            current = current * (rowIndex - i) / (i + 1);
        }
        return row; 
        
    }
};
