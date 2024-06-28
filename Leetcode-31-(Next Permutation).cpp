//Leetcode 31
//Find next permutation of the Array.
//If it is in descending sorted order, then just reverse it.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums);

void array(vector<int>& nums);

int main()
{
    int size;

    cout<<"Enter size of the  Array : ";
     cin>>size;

    vector<int> v(size);

    for(int i=0; i<size; i++)
    {
        cout<<"Enter "<<i<<" index element : ";
         cin>>v[i];
    }
    array(v);

    nextPermutation(v);
    array(v);
}

void array(vector<int>& nums)
{
    cout<<"Array : ";
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<"    ";
    }
}

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int pivot_index = -1;
    int successor_index = -1;

    //Step 1 : Find the pivot index. 
    for(int i = n-2; i>=0; i--)
    {
        if(nums[i] < nums[i+1])
        {
            pivot_index = i;
            break;
        }
    }

    //Step 2 : If array is already greatest, just reverse.
    if(pivot_index == -1) // This step is for if the array is in descending order [3,2,1]
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    //Step 3 : If not then reverse the next pivot element to the last.
    else // This step is for Rest cases
    {
        reverse(nums.begin()+(pivot_index+1),nums.end());
    }

    //Step 4 : Find the just larger number than pivot element.

    for(int j=pivot_index+1; j<n; j++)
    {
        if(nums[j] > nums[pivot_index])
        {
            successor_index = j;
            break;
        }
    }

    //Step 5 : Swap the successor and pivot element
    int temp = nums[pivot_index];
    nums[pivot_index] = nums[successor_index];
    nums[successor_index] = temp;
    
    return;
}

