class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>map;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
        }

        for(auto it:map)
        {
            if(it.second>n/2)
                return it.first;
        }
        return 0;
    }
};