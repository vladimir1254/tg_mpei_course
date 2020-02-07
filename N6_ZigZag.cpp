// https://leetcode.com/problems/zigzag-conversion/
class Solution {
public:
    string convert(string s, int numRows) {
       map<int,string> res;
        string ans;
        if(numRows==0) return ans;
        if(numRows==1) return s;
        int b1 = 0;
        int b2 = numRows-2;
        for(int i = 0;i<s.size();i++)
        {
            if(b1!=numRows && b2==numRows-2)
            {
              res[b1]+=s[i];
                b1++;
            }
            else
            {
                if(b1==numRows && b2>0)
                {
                    res[b2]+=s[i];
                    b2--;
                    
                }
                else
                    if(b1==numRows && b2==0)
                    {
                        res[0]+=s[i];
                        b1=1;
                        b2=numRows-2; 
                    }
            }
            
            
        }
        for(int i = 0;i<res.size();i++)
            ans+=res[i];
        return ans;
        
    }
};
