bool isPalindrome(int x){

    int temp, rev;
    long sum=0;

    temp=x;

    while(x>0)
    {
        rev=x%10;
        sum=(sum*10)+rev;
        x=x/10;
    }

    if(temp==sum)
        return 1;
     return 0;   
}