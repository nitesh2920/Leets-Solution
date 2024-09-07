class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>map;
        int ans=-1;
        for(auto it:arr)
        {
            map[it]++;
        }

        for(int it:arr)
        {
            if(it==map[it]){
               ans=max(it,ans);
            }                
        }
        return ans;
    }
};