class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
    int n=nums.size();

    vector <int> result(n);
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            int index=(i+nums[i])%n;
            result[i]=nums[index];

        }else if(nums[i]<0){
            int index=(i-abs(nums[i]))%n;
            if(index<0)
            {
                index+=n;

            }
            result[i]=nums[index];
        }
        else{
            result[i]=nums[i];
        }
    }
    return result;
        
    }
};