class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index;
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(largest<nums[i])
            {
                largest=nums[i];
                index=i;
            
            }
        }
        sort(nums.begin(),nums.end());
        int secondLargest=nums[nums.size()-2];
        if(largest>=2*secondLargest)
            return index;
        return -1;
    }
};