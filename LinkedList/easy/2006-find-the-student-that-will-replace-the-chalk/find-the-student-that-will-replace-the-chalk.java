class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        long totalChalks=0;
        for(int i:chalk)
            totalChalks+=i;
        k=(int)(k%totalChalks);
            for(int i=0;i<chalk.length;i++)
            {
                if(chalk[i]>k)
                    return i;
                k-=chalk[i];
            }
           
        
        return 0;
    }
}