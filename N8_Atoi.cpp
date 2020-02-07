// https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string str) {
        
        while(str[0]==' ')
            str.erase(str.begin());
        if(str[0]=='+' || str[0]=='-' || str[0]=='0'
           || str[0]=='1' || str[0]=='2' || str[0]=='3' ||
             str[0]=='4' || str[0]=='5' || str[0]=='6' || str[0]=='7' ||
             str[0]=='8' || str[0]=='9')
        {
        int i = 1;
        while(
             str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' ||
             str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' ||
             str[i]=='8' || str[i]=='9' )
        {
            i++;
        }
            str.erase(str.begin()+i,str.end());
            int fl=3; // есть знак?
            if(str[0]=='+')
            {
                fl =0;// знак +
            }
            if(str[0]=='-')
                fl = 1; // знак -
            double p=0;
            if(fl == 3)
            {
                while(str[0]=='0')
                        str.erase(str.begin());
                if(str.empty()) return 0;
                if(str.size()>10)
                    return 2147483647;
            for(int i = 0;i<str.size();i++)
            {
                p+=(str[i]-'0')*pow(10,str.size()-i-1);
            }
                if(p>=2147483647)
                    return 2147483647;
                else
                    return floor(p);
                
            }
            else
            {
                if(fl==1)
                {
                    while(str[1]=='0')
                        str.erase(str.begin()+1);
                                  if(str.empty()) return 0;
                if(str.size()>11)
                    return -2147483648;
                for(int i = 1;i<str.size();i++)
                {
                   p+=(str[i]-'0')*pow(10,str.size()-i-1);
                }
                if(p>=2147483648)
                    return -2147483648;
                else
                    return -floor(p);
            }
                else
                {
                    while(str[1]=='0')
                        str.erase(str.begin()+1);
                                  if(str.empty()) return 0;
                    if(str.size()>11)
                    return 2147483647;
                for(int i = 1;i<str.size();i++)
                {
                   p+=(str[i]-'0')*pow(10,str.size()-i-1);
                }
                if(p>=2147483647)
                    return 2147483647;
                else
                    return floor(p);
                }
            }
        }
        else
        {
            return 0;
        }
    }
};
