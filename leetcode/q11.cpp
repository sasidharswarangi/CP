class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j;
        int maxarea=0;
        int s = height.size();
        
        i=0;
        j=s-1;
        while(i<j)
        {
            int minheight= min(height[i],height[j]);

            maxarea=max(maxarea,(j-i)*minheight);

            if(height[i]>height[j])
                {
                    j--;
                }
            else
                i++;

        }
        return maxarea;
    }
};