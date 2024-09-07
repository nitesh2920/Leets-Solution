class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0,leftSum=0;
        for(int i=0;i<nums.size();i++)
            totalSum+=nums[i];

        for(int i=0;i<nums.size();i++)
        {
            int right=totalSum-leftSum-nums[i];
            if(right==leftSum)
                return i;
            
            leftSum+=nums[i];
        }
        return -1;
        
     }
};