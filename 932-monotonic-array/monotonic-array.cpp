class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool Inc=true;
        bool Dec=true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                Inc=false;
            else if(nums[i]<nums[i-1])
                Dec=false;
        

        if(!Inc && !Dec)
              return false;
        }
        return true;


        
    }
};