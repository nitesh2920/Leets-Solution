class Solution {
    public boolean isPalindrome(int x) {
        int rev,temp;
        int sum=0;
        temp=x;
        while(x>0)
        {
            rev=x%10;
            sum=(sum*10)+rev;
            x=x/10;
        }
        if(sum==temp)
            return true;
        return false;
    }
}