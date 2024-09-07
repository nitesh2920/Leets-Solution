class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int it:nums)
            map[it]++;
        
        int maxi=INT_MIN;
        for(auto it:map)
        {
            if(it.second>maxi)
                maxi=it.second;
        }
        int ans=0;
        for(auto it:map)
        {
            if(it.second ==maxi)
                ans+=maxi;
        }

        return ans;
    }
};