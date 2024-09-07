class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=0;
        int mindiff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1;
            int k=nums.size()-1;


            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                    return sum;
                else if(sum<target)
                    j++;
                else
                    k--;
                    
                int diff=abs(sum-target);
                    if(diff<mindiff)
                    {
                        mindiff=diff;
                        closest=sum;
                    }
            }
        }
        return closest;
    }
};
            