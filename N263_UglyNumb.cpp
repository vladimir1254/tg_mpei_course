// https://leetcode.com/problems/ugly-number/
class Solution {
public:
    bool isUgly(int num) {
        if(num==1) return true;
        if(num<=0) return false;
        if(num%2!=0 && num%3!=0 && num%5 !=0)
            return false;
       for(int i = 2 ; i<=sqrt(num);)
        {
            if(num%i==0)
            {
              if((i%2!=0 && i%3!=0 && i%5!=0)||(num/i%2!=0 && num/i%3!=0 && num/i%5!=0))
               {
                   //cout<<i<<endl;
                    return false;
                }
              num/=i;
           }
            else
                i++;
        }
        return true;
    }
};
