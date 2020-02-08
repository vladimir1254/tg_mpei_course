// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string s;
        if(digits=="") return res;
        create(res,s,digits,digits[0],0);
        return res;
    }
    void create(vector<string>& res,string s,string dig,char c,int i)
    {
        if(s.size()==dig.size())
        {
            res.push_back(s);
            return;
        }
        if(i<dig.size())
        {
        if(c=='2')
        {
            create(res,s+'a',dig,dig[i+1],i+1);
             create(res,s+'b',dig,dig[i+1],i+1);
      create(res,s+'c',dig,dig[i+1],i+1);       
        }
        if(c=='3')
        {
             create(res,s+'d',dig,dig[1+i],i+1);
              create(res,s+'e',dig,dig[1+i],i+1);
    create(res,s+'f',dig,dig[1+i],i+1);   
        }
        if(c=='4')
        {
      create(res,s+'g',dig,dig[1+i],i+1);
      create(res,s+'h',dig,dig[1+i],i+1);
   create(res,s+'i',dig,dig[1+i],i+1);
        }
        if(c=='5')
        {
            create(res,s+'j',dig,dig[1+i],i+1);
            create(res,s+'k',dig,dig[1+i],i+1);
            create(res,s+'l',dig,dig[1+i],i+1);
        }
        if(c=='6')
        {
            create(res,s+'m',dig,dig[1+i],i+1);
            create(res,s+'n',dig,dig[1+i],i+1);
            create(res,s+'o',dig,dig[1+i],i+1);
        }
        if(c=='7')
        {
            create(res,s+'p',dig,dig[1+i],i+1);
            create(res,s+'q',dig,dig[1+i],i+1);
            create(res,s+'r',dig,dig[1+i],i+1);
            create(res,s+'s',dig,dig[1+i],i+1);
        }
        if(c=='8')
        {
            create(res,s+'t',dig,dig[1+i],i+1);
            create(res,s+'u',dig,dig[1+i],i+1);
            create(res,s+'v',dig,dig[1+i],i+1);
        }
        if(c=='9')
        {
            create(res,s+'w',dig,dig[1+i],i+1);
            create(res,s+'x',dig,dig[1+i],i+1);
            create(res,s+'y',dig,dig[1+i],i+1);
            create(res,s+'z',dig,dig[1+i],i+1);
        }     
            }
    }
};
