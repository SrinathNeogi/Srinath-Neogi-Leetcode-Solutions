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
//Method 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int missing = 0;

        if(nums[0] != 0)
        {
            missing = 0;
        }
        else if(nums[n-1] != n)
        {
            missing = n;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(nums[i+1] - nums[i] != 1)
                {
                    missing = (nums[i+1] - 1);
                }
            }
        }
        return missing;
    }
};
