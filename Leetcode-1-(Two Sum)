class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i;
        int j;
        vector<int>solution(2);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1;j<n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    solution[0] = i;
                    solution[1] = j;
                }
            }
        }
        return solution;
    }
};
