// https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
  
            vector<vector<int>> a(numRows);
        if(numRows>0)
        {
            for(int i=0;i<numRows;i++)
                a[i].resize(i+1);
        for(int i=0;i<numRows;i++)
        {
            a[i][0]=1;
            a[i][a[i].size()-1]=1;
        }
        for(int i=2;i<numRows;i++)
        {
          for(int j=1;j<a[i].size()-1;j++)
            {
               a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        }     
        return a;  
    }
};
