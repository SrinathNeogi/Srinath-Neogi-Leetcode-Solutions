//Leetcode 88
//Merge two sorted array, resultant array also must be sorted.
//Use Three Pointer Approach.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

void array(vector<int> &nums);

int main()
{
    int size1;
    int size2;

    cout<<"Enter numbers of elements in the Array1 : ";
     cin>>size1;

    cout<<"Enter numbers of elements in the Array2 : ";
     cin>>size2;

    vector<int>v1(size1);

    cout<<"Enter Array1."<<endl;

    for(int j=0; j<size1; j++)
    {
        int x; 

        cout<<"Enter "<<j<<" index element : ";
         cin>>v1[j];
    }

    sort(v1.begin(),v1.end());
    v1.resize(size1 + size2);
    array(v1);

    vector<int>v2(size2);

    cout<<endl<<"Enter Array2."<<endl;

    for(int k=0; k<size2; k++)
    {
        int x; 

        cout<<"Enter "<<k<<" index element : ";
         cin>>v2[k];
    }
    sort(v2.begin(),v2.end());
    array(v2);

    merge(v1,size1, v2, size2);
    array(v1);
}

void array(vector<int> &nums)
{
    cout<<"Array : ";
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<"    ";
    }
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m-1;
    int j = n-1;
    int k = (m+n)-1;

    while(i>=0 && j >= 0)
    {
        if(nums1[i] < nums2[j])
        {
            nums1[k--] = nums2[j--]; 
        }
        else if(nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums1[i--];
        }
    }
    if(i < 0) // Array 1 Completed.
    {
        while(j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
    if(j < 0) // Array 2 Completed.
    {
        while(i >= 0)
        {
            nums1[k--] = nums1[i--];
        }
    }
    return;
}
