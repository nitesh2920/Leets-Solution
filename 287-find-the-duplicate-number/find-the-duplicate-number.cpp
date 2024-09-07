class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //FIRST APPROACH USING BIT MANIPULATION
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]^nums[i-1])==0)
                return nums[i];
        }       
        return 0;
        
        //SECOND APPROACH USING MAP
       /* unordered_map<int,int>map;
        for(int i:nums)
            map[i]++;
        for(const auto &it:map)
        {
            if(it.second>1)
                return it.first;
        }
        return 0;*/
    }
};