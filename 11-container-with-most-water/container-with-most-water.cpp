class Solution {
public:
    int maxArea(vector<int>& height) {
        //BRUTE FORCE
       /* int maxi=INT_MIN;       
        int n=height.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // int minHeight = min(height[i], height[j]);
               int area=(j-i)*min(height[i],height[j]);
               maxi=max(maxi,area);
            }
        }
        return maxi;
        */

        //OPTIMIZED APPROACH
        int left=0;
        int right=height.size()-1;
        int maxi=INT_MIN;
        while(left<right)
        {
            int width=right-left;
            int minHeight=min(height[left],height[right]);

            int area=width*minHeight;
            maxi=max(maxi,area);

            if(height[left]>height[right])
                right--;
            else
                left++;
        }

        return maxi;
    }
};