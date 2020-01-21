// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    bool ffind(string s,char c)
    {
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==c)
                return true;
        }
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int max = 0;
        string str;
        int j = 0;
        bool fl = true;
        for(int i=0;i<s.size();i++)
        {
            // dv df
            bool f=ffind(str,s[i]);
            if(!f)
            {
            str+=s[i];
            }
            else
            {
                if(str.size()>res)
                {
                    res = str.size();
                }
                i-=str.size();
                str.clear();
            }
        }
        cout<<str.size();
        res = res>str.size()?res :str.size();
        return res;
    }
};
