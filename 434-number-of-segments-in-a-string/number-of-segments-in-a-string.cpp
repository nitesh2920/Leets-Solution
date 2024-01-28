class Solution {
public:
    int countSegments(string s) {
        int count=0;
        bool flag=false;
       for(char c:s)
       {
           if(c!=' '){
               if(!flag){
                   flag=true;
                    count++;
               }      
           }
           else{
               flag=false;
           }
       }
        return count;
    }
};