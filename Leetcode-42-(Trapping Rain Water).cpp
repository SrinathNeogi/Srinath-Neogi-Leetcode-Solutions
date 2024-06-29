class Solution {
public:
    int trap(vector<int>& height) {
        int water_amount = 0;
        int n = height.size();


        vector<int> pge(n); //Previous Greatest Element Array
        vector<int>nge(n); // Next Greatest element Array

        //Finding PGE Array

        pge[0] = -1;
        int max1 = height[0];

        for(int i=1; i<n; i++)
        {
            pge[i] = max1;

            if(height[i] > max1)
            {
                max1 = height[i];
            }
        }

        //Printing array -> array(pge);

        //Finding NGE Array

        nge[n-1] = -1;
        int max2 = height[n-1];

        for(int j=n-2; j>=0; j--)
        {
            nge[j] = max2;

            if(height[j] > max2)
            {
                max2 = height[j];
            }
        }

        //Printing array -> array(nge);

        //Making third array where minium of nge and pge will be stored.
        vector<int> main(n);

        for(int k=0; k<n; k++)
        {
            if(pge[k] < nge[k])
            {
                main[k] = pge[k];
            }
            else
            {
                main[k] = nge[k];
            }
        }

        //Printing array -> array(main);

        //Comparing with height array and calculating water amount.

        for(int p=1; p<n-1; p++)
        {
            if(main[p] > height[p])
            {
                water_amount += main[p] - height[p];
            }
        }

        return water_amount;
    }
};
