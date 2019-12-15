// https://leetcode.com/problems/ugly-number-ii/
class Solution {
public:
    
    int nthUglyNumber(int n) {
        vector res(1,1);
      int i=0;
        int j=0;
        int k = 0;
        while(res.size()<n)
        {
            int z = min(res[i]*2,min(res[j]*3,res[k]*5));
            res.push_back(z);
            if(z==res[i]*2) i++;
            if(z==res[j]*3) j++;
            if(z==res[k]*5)  k++;
        }
        return res[res.size()-1];
    }
};
