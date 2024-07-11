class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> spiral(row*col);
        int spiral_indx = 0;

        int minr = 0;
        int minc = 0;
        int maxr = row - 1;
        int maxc = col - 1;
         while(true)
        {
            // Right (Min row fixed)
            for(int j=minc; j<=maxc; j++)
            {
                spiral[spiral_indx++] = matrix[minr][j];
            }
            minr ++;
            if(minr > maxr)
            {
                break;
            }
            // Down (Max column fixed)
            for(int i=minr; i<=maxr; i++)
            {
                spiral[spiral_indx++] = matrix[i][maxc];
            }
            maxc --;
            if(minc > maxc)
            {
                break;
            }
            //Left(Max row fixed)
            for(int j=maxc; j>=minc; j--)
            {
                spiral[spiral_indx++] = matrix[maxr][j];
            }
            maxr --;
            if(minr > maxr)
            {
                break;
            }
            //Up(Min column fixed)
            for(int i=maxr; i>=minr; i--)
            {
                spiral[spiral_indx++] = matrix[i][minc];
            }
            minc ++;
            if(minc > maxc)
            {
                break;
            }
        }
        return spiral;
    }
};
