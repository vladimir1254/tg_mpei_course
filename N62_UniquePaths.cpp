// https://leetcode.com/problems/unique-paths/
class Solution {
public:
    
    int factorial(int k)
    {
        
        if(k==1 || k==0) return 1;
        int s=1;
        for(int i=1;i<=k;i++)
            s=s*i;
        return s;
    }
    int recursia(int m1,int n1,int k)
    {
        if(m1==1)
            return k+1;
        if(n1==1)
            return k+1;
        if(m1==2)
            return k+n1;
        if(n1==2)
            return k+m1;
         if(n1==m1)
            return k=k+2*recursia(m1-1,n1,k);
        if(m1-4>0 && n1-4>0)
        {
     //   recursia(m1,n1)=recursia(m1-1,n1-1)+recursia(m1-2,n1)+recursia(m1,n1-2);
   //     k=k+recursia(m1,n1-1,k)+recursia(m1-1,n1,k);
    k=k+2*recursia(m1-1,n1-2,k)+recursia(m1-2,n1-1,k)+recursia(m1,n1-3,k)+
    2*recursia(m1-2,n1-1,k)+recursia(m1-3,n1,k)+recursia(m1-1,n1-2,k);
        }
        else
        {
        k=k+recursia(m1,n1-1,k)+recursia(m1-1,n1,k);
        }
        return k;
    }
    int uniquePaths(int m, int n) {
        if(n==2)
            return m;
        int k1=0;
    k1=recursia(m,n,0);
        return k1;  
    }
};
