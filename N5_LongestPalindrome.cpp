// https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string palindrome(int l,int r, string s)
    {
        while(l>=0 && r<s.size() && s[l]==s[r])
        {
            r++;
            l--;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
       string res;
        for(int i = 0;i<s.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                string str = palindrome(i,i+j,s);
                    if(str.size()>res.size())
                        res=str;
            }
        }
        return res;
    }
};
