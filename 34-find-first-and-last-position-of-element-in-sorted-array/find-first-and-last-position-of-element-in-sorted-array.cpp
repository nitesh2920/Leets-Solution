class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start=0;
        int end=nums.size()-1;
        int si=-1;
        int ei=-1;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==target){
               si=i;
               break;
           }
       }

         for(int i=nums.size()-1;i>=0;i--)
       {
           if(nums[i]==target){
               ei=i;
               break;
           }
       }
    
    return {si,ei};
    
    }
};