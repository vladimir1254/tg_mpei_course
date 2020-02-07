// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
            if(strs.empty())
            return res;
        int mins=strs[0].size();
        for(int i = 0;i<strs.size();i++)
            if(strs[i].size()<mins) mins = strs[i].size();
        bool fl=true;
        for(int j = 0;j<mins;j++)
        {
            int i=0;
        for(;i<strs.size()-1;i++)
        {
                if(strs[i][j]!=strs[i+1][j])
                {
                    
                    fl=false;
                    break;
                }    
        }
            if(!fl)
                break;
           res+= strs[i][j];
        }
        return res;
    }
};
