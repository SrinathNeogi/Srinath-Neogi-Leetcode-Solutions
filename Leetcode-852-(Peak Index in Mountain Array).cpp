class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int f = 0;
        int l = n-1;

        int peak = 0;

        while(f <= l)
        {
            if(f == l)
            {
                peak = f;
                return peak;
            }
            if(arr[f] == arr[l])
            {
                f++;
                l--;
            }
            else if(arr[f] > arr[l])
            {
                l--;
            }
            else
            {
                f++;
            }
        }
        return -1;
    }
};
