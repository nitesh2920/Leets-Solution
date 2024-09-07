class Solution {
    public int countSeniors(String[] details) {

        int count=0;
        for(String str:details)
        {
            // int a= Integer.parseInt(str.charAt(11));
            // int b=Integer.parseInt(str.charAt(11));
             int a= str.charAt(11)-'0';
            int b=str.charAt(12)-'0';
            int age=(a*10)+b;

            if(age>60)
            count++;

        }
        
        return count;
    }
}