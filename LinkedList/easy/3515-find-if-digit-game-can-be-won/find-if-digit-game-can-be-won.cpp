class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumOfSingleDigit=0;
        int sumOfDoubleDigit=0;
        for(auto i:nums)
        {
            if(i<10)
                sumOfSingleDigit+=i;
            else if(i>=10)
                sumOfDoubleDigit+=i;
        }
        // cout<<sumOfSingleDigit<<" "<< sumOfDoubleDigit;
        if(sumOfSingleDigit>sumOfDoubleDigit ||sumOfSingleDigit<sumOfDoubleDigit)
            return 1;
        else
            return 0;
    }
};