class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /* TC=O(n log n)
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans; 
        */

        //TC-O(n);
        int n=nums.size();
        vector<int>ans(n);
        int left=0;
        int right=n-1;
        for(int i=n-1;i>=0;i--)
        {
            int sq=1;
            if(abs(nums[left])>abs(nums[right]))
            {
                sq=nums[left]*nums[left];
                left++;
            }
            else{
                sq=nums[right]*nums[right];
                right--;
            }
            ans[i]=sq;
        }

        return ans;
    }
};