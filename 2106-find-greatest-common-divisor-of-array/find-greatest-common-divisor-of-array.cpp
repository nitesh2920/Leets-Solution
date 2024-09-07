class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int smallest=nums[0];
        int largest=nums[nums.size()-1];

        if(smallest==0)
            return largest;
        if(largest==0)
            return largest;
        
        while(smallest!=largest)
        {
            if(smallest>largest)
                smallest=smallest-largest;
            else
                largest=largest-smallest;
        }
        return largest;
        
    }
};