class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       //Brute Force
       /* vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
             int pro=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                pro*=nums[j];
            }
            ans.push_back(pro);

        }
        return ans;*/
        
        vector<int>ans(nums.size(),1);

        int leftpro=1;
        int rightpro=1;
        for(int i=0;i<nums.size();i++)
        {
            ans[i]*=leftpro;
            leftpro*=nums[i];
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]*=rightpro;
            rightpro*=nums[i];
        }
       
        return ans;
       
    }
};