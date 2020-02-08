// https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                if(row(board,i,j,board[i][j])||col(board,j,i,board[i][j])||box(board,i,j,board[i][j])) return false;
            }
        }
        return true;
    }
    bool row(vector<vector<char>>& board,int i,int j,char c)
    {
        for(int k = 0;k<9;k++)
        {
            if(board[i][k]==c && k!=j) return true;// есть в строке.
        }
        return false;
    }
    bool col(vector<vector<char>>& board,int j,int i,char c)
    {
        for(int k = 0;k<9;k++)
        {
            if(board[k][j]==c && k!=i) return true;// есть в cтолбце
        }
        return false;
    }
    bool box(vector<vector<char>>& board,int i,int j,char c)
    {
        int m = i/3;
        int n = j/3;
    for(int k = 3*m;k<3*(m+1);k++)
    {
        for(int q=3*n;q<3*(n+1);q++)
        {
            if(board[k][q]==c && (k!=i || q!=j)) return true;
        }
    }
        return false;
    }
};
