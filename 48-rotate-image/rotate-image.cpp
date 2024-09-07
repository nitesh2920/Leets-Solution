class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<i;j++)
            {
               swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<row;i++)
        {   
            // int start=0;
            // int end=matrix[i].size()-1;
            // while(start<end)
            // {
            //     swap(matrix[start][i],matrix[end][i]);
            //     start++;
            //     end--;
            // }
            reverse(matrix[i].begin(),matrix[i].end());
            //understand
        }
       
    }
};