// Sort colour -> sort array of 0's ,1's , 2's.
// It is called Dutch National Flag Algorithm. 
// Run time 0 ms.
#include<iostream>
#include<vector>
using namespace std;

void sort_0_1_2(vector<int>&nums);

void swap(int *a, int *b);

void array(vector<int> &nums);

int main()
{
    int size;

    cout<<"Enter size of the Array : ";
     cin>>size;

    vector<int>v;

    cout<<"Enter Array."<<endl;

    for(int j=0; j<size; j++)
    {
        int x; 

        cout<<"Enter "<<j<<" index element : ";
         cin>>x;
        
        v.push_back(x);
    }

    sort_0_1_2(v);
    array(v);

}

void sort_0_1_2(vector<int> &nums)
{
    int n = nums.size();
    int front = 0;
    int mid = 0;
    int end = n - 1;

    while(mid <= end)
    {
        if(nums[mid] == 2)
        {
            swap(&nums[mid],&nums[end]);
            end--;
        }
        else if(nums[mid] == 0)
        {
            swap(&nums[front],&nums[mid]);
            front++;
            mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
    }
    return;
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void array(vector<int> &nums)
{
    cout<<"Array : ";
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<"    ";
    }
}
