// https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s;
       create(res,s,n,n,n);
        return res;
    }
    void create(vector<string>& s,string str,int open,int n,int close)
    {
        if(str.size()==2*n)
        {
            s.push_back(str);
            return;
        }
        if(open>0)// есть открывающие скобки
        {
            create(s,str+'(',open-1,n,close);
        }
        if(close>open)
        {
            create(s,str+')',open,n,close-1);
        }
    }
};
