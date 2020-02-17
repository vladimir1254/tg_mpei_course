// https://leetcode.com/problems/implement-strstr/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="") return 0;
        int res=0;
        bool f2=false;
        for(int i = 0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
            f2=true;
                for(int j = 0;j<needle.size();j++)
                {
                    if(i+j>=haystack.size() || haystack[i+j]!=needle[j])
                    {
                        cout<<haystack[i+j]<<" != "<<needle[j];
                        f2=false;
                        break;
                    }
                }
                if(f2)
                {
                    res=i;
                    break;
                }
            }
        }
        cout<<f2;
        if(f2)
            return res;
        return -1;
    }
    
};
