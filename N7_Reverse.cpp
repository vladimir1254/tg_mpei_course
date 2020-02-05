// https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        if(x==-pow(2,31))
            return 0;
        bool fl=true;// число положительное
        if(x<0)
        {
            fl=false;
            x=-x;
        }
        int k = 0;
        int z = x;
        while(z>0)
        {
            z/=10;
            k++;
        }
        double res=0;
        while(x>0)
        {
            
            res+=x%10 *pow(10,k-1)*0.1;
            x/=10;
            k--;
        }
        if((res<=214748364.7 && fl) ||(-res>-214748364.8 && !fl))
        {
        if(fl)
            return res*10;
        else return -res*10;
        }
        else
        return 0;
    }
};
