class Solution {
public:
    string intToRoman(int num) {

        map<int,string>map;
        map[1]='I';
        map[4]="IV";
        map[5]='V';
        map[9]="IX";
        map[10]='X';
        map[40]="XL";
        map[50]='L';
        map[90]="XC";
        map[100]='C';
        map[400]="CD";
        map[500]='D';
        map[900]="CM";
        map[1000]='M';

        // stack<string>st;
        // int k=0;
        // string s=to_string(num);
        // for(int i=s.length()-1;i>=0;i--,k++)
        // {
        //     char n=s[i];
        //     int digit=n-'0';
        //     int ans=digit*pow(10,k);
        //     if(ans<4)
        //     {
        //         for int j=0;j<ans;j++;
        //     }
        //     else
        //         st.push(map[ans]);
        //     cout<<ans<<" "<<map[ans];
            
        // }

        // while(!st.empty())
        // {
        //     // string ans+=st.top();
        //     cout<<st.top()<<" ";
        //     st.pop();
        //     // cout<<ans;
        // }
        
       
       string ans = "";
    for (auto it =map.rbegin(); it != map.rend(); it++) {
            while (num >= it->first) {
                ans += it->second;
                num -= it->first;
            }

            
    
        }

        return ans;
        
    }
};