class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int sum_array = 0;

        for(int i=0; i<n; i++)
        {
            sum_array += nums[i];
        }

        int missing = sum - sum_array;

        return missing;
    }
};
