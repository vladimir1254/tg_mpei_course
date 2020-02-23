// https://leetcode.com/problems/divide-two-integers/
class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign;
        if( (dividend<=0 && divisor<0)|| (dividend>=0 && divisor>0) )
            sign = 1;
        else
            sign = -1;
        int res=0;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        long divend = labs(dividend);
        long divis  = labs(divisor);
        
        while(divend>=divis)
        {
            int i = 0;
            while(divend>=divis<<i)
            {
                divend-=divis<<i;
                res+=1<<i;
                i++;
            }
            
            if(res==INT_MAX)
                return INT_MAX*sign;
        }
        return sign * res;
        
        
    }
};
