/*
Leetcode 73
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
*/
#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix);

int main()
{
    int rows, cols;

    cout<<"Enter row size : ";
     cin>>rows;

    cout<<"Enter column size : ";
     cin>>cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout<<endl<<"Enter matrix."<<endl;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>matrix[i][j];
        }
    }

    setZeroes(matrix);
}

void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<bool> row(rows,false);
    vector<bool> col(cols,false);

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = true; // Marking where 0 is present in rows
                col[j] = true; // Marking ehere 0 is present in column
            }
        }
    }
    // Make rows zero from boolean row vector
    for(int i=0; i<rows; i++)
    {
        if(row[i] == true)
        {
            for(int j=0; j<cols; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Make columns zero from boolean column vector
    for(int j=0; j<cols; j++)
    {
        if(col[j] ==  true)
        {
            for(int i=0; i<rows; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    cout<<endl<<"Matrix"<<endl;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<"    ";
        }
        cout<<endl;
    }
}
