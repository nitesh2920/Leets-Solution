class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int lastposition=nums.size()-1;

        // for(int i=nums.size()-2;i>=0;i--)
        // {
        //     if(i+nums[i]>=lastposition)
        //         lastposition=i;
        // }

        // return lastposition ==0;

        int reach=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>reach)
                return false;
            reach=max(reach,i+nums[i]);
        }
        return true;
    }
};