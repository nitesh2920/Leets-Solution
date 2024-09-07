class Solution {
    public boolean canAliceWin(int[] nums) {
        int sumOfSD=0,sumOfDD=0;

        for(int i:nums)
        {
            if(i<10)
                sumOfSD+=i;
            else
                sumOfDD+=i;
        }

        if(sumOfSD >sumOfDD ||sumOfSD <sumOfDD )
            return true;
        return false;

        
    }
}