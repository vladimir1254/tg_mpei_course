// https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& a) {
        int max;
        int m = a.size()-1;
        int n = 0;
      if(a[m]>a[n])
          max = a[n]*(m-n);
        else
            max = a[m]*(m-n);
        if(a.size()>2)
        {
   
        while(m>n)
        {
            if(a[m]>a[n])
            {
          if(a[n]*(m-n)>max)
          {
              max = a[n]*(m-n);
          }
                n++;
            }
            else
            {
              if(a[m]*(m-n)>max)
              {
                  max = a[m]*(m-n);
              }
                m--;
            }
        }
        }
        return max;
    }
};
