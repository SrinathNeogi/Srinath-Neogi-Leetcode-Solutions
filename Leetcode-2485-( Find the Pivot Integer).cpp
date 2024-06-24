class Solution {
public:
    int pivotInteger(int n) {
        int i;
        if(n == 1)
        {
            return 1;
        }
        else if(n < 0)
        {
            return -1;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(i*(2*i) == n*(n+1))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
