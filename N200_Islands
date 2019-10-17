// https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    void zamena(vector<vector<char>>& grid,int i,int j)
    {
        if(grid[i][j]=='1')
        {
            grid[i][j]='5';
            if(i+1<grid.size())
            {
                zamena(grid,i+1,j);
            }
            if(i-1>=0)
            {
                zamena(grid,i-1,j);
            }
            if(j+1<grid[i].size())
            {
                zamena(grid,i,j+1);
            }
            if(j-1>=0)
            {
                zamena(grid,i,j-1);  
            }
            
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int s=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    zamena(grid,i,j);
                    s++;
                }// берем 1 - и весь "остров" из '1' заменим на другое число - 5
             }
        }
      
        return s;
    }
};
