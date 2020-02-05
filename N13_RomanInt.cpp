// https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0;i<s.size();i++)
        {
                if( i<=s.size()-1 &&( (s[i]=='I'&& s[i+1]=='V') || 
                                     (s[i]=='I'&& s[i+1]=='X') ||
                 (s[i]=='X'&& s[i+1]=='L')|| (s[i]=='X'&& s[i+1]=='C')||
                 ( s[i]=='C'&& s[i+1]=='D')|| (s[i]=='C'&& s[i+1]=='M')))
                {
                if(s[i]=='I'&& s[i+1]=='V')
                    res+=4;
                else
                 if(s[i]=='I'&& s[i+1]=='X')
                    res+=9;
                    else
                 if(s[i]=='X'&& s[i+1]=='L')
                    res+=40;
                        else
                 if(s[i]=='X'&& s[i+1]=='C')
                    res+=90;
                            else
                 if(s[i]=='C'&& s[i+1]=='D')
                    res+=400;
                                else
                 if(s[i]=='C'&& s[i+1]=='M')
                    res+=900;
                    i++;
                }
                else
                {
                    if(s[i]=='I')
                        res+=1;
                    if(s[i]=='V')
                        res+=5;
                    if(s[i]=='X')
                        res+=10;
                    if(s[i]=='L')
                        res+=50;
                    if(s[i]=='C')
                        res+=100;
                    if(s[i]=='D')
                        res+=500;
                    if(s[i]=='M')
                        res+=1000;  
                }
        }
        return res;
    }
};
