class Solution {
public:
    void subsets(vector<int>& nums,int i,vector<int> output,vector<vector<int>> &ans)
    {
        //base Case
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        subsets(nums,i+1,output,ans);
        
        //include
        int elem=nums[i];
        output.push_back(elem);
        subsets(nums,i+1,output,ans);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        vector<int>output;
        subsets(nums,i,output,ans);

        return ans;
    }
};