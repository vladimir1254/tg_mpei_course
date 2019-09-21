// https://leetcode.com/problems/jewels-and-stones/
class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int p=0;
for(int i=0;i<(int)j.size();i++)
{
    for(int k=0;k<(int)s.size();k++)
    {
        if(j[i]==s[k])
            p++;
    }
}
        
      return p;  
    }
};
