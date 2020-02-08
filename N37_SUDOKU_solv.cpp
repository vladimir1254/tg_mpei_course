// https://leetcode.com/problems/sudoku-solver/
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        resh(board,0);
    }
    bool resh(vector<vector<char>>& board,int pos)
    {
        if(pos>=81) return true;
        int i = pos/9;//строка
        int j = pos%9;// столбец
        if(board[i][j]!='.')
        {
           return resh(board,pos+1);
        }
        else
        {
           for(char c = '1';c<='9';c++) 
           {
               if(!row(board,i,c) && !col(board,j,c)&&!box(board,i,j,c))
               {
                   board[i][j]=c;
                   if(resh(board,pos+1)) return true;
                   else
                   {
                       board[i][j]='.';
                   }    
               }
           }
        return false;
        } 
    }
    bool row(vector<vector<char>>& board,int j,char c)
    {
        for(int i = 0;i<9;i++)
        {
            if(board[j][i]==c) return true;// символ есть в строке.
        }
        return false;
    }
    bool col(vector<vector<char>>& board,int j,char c)
    {
        for(int i = 0;i<9;i++)
        {
            if(board[i][j]==c) return true;// есть в столбце.
        }
        return false;
    }
    bool box(vector<vector<char>>& board,int i,int j,char c)
    {
        int m = i/3;
        int n = j/3;
        for(int k =3*m;k<3*(m+1);k++)
        {
            for(int l =3*n;l<3*(n+1);l++)
            {
                if(board[k][l]==c) return true;
            }
        }
        return false;         
    } 
};
