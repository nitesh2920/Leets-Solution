class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int> map;
        for(auto i:nums)
            map[i]++;
        
        for(const auto& i:map)
        {
            if(i.second!=2)
                v.push_back(i.first);
        }

        return v;
        
    }
};