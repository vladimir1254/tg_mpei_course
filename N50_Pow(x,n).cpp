// https://leetcode.com/problems/powx-n/
class Solution {
public:
    double myPow(double x, int n) {
        double a=1;
        unsigned long long p;
        if(n<0)
        {
        if(n == INT_MIN) return (1/x)*myPow(x, n+1);
          p = (-1)*n;
            x=1/x;
        }
        else
        {
            p=n;
        }
        while(p>0)
        {
            if(p%2==1)
            a=a*x;
            x=x*x;
            if(p%2==0)
            {
                p=p/2;
            }
            else
            {
                p=(p-1)/2;
            }
        }
        return a;
    }
};
