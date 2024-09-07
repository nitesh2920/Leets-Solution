class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        int ans=0;
        for(auto x:nums)
            map[x]++;
        
        // for(auto it:map)
        // {
        //     if(it.second==1)
        //         return it.first;
        // }

        for(auto it:nums)
        {
            if(map[it]==1)
            {
                ans=it;
                break;
            }
                
        }
        return ans;
    }
};