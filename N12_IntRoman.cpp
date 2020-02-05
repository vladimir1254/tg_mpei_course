// https://leetcode.com/problems/integer-to-roman/
class Solution {
public:
    string intToRoman(int num) {
        string res;
        int M=num/1000;
        num-=M*1000;
        for(int i = 0 ;i<M;i++)
            res=res+"M";
        if(num>=900)
        {
            res+="CM";
            num-=900;
        }
        int D=num/500;
        num-=D*500;
          for(int i = 0 ;i<D;i++)
            res=res+"D";
        
        if(num>=400)
        {
            res+="CD";
            num-=400;
        }
        int C=num/100;
        num-=C*100;
         for(int i = 0 ;i<C;i++)
            res=res+"C";
        if(num>=90)
        {
            res=res+"XC";
            num-=90;
        }
        
        int L=num/50;
        num-=L*50;
        for(int i = 0 ;i<L;i++)
            res=res+"L";
        
        if(num>=40)
        {
            res+="XL";
            num-=40;
        }
          int X=num/10;
        num-=X*10;
        for(int i = 0 ;i<X;i++)
            res=res+"X";
        
        if(num==9)
        {
            res+="IX";
            num=0;
        }
           int V=num/5;
        num-=V*5;
         for(int i = 0 ;i<V;i++)
            res=res+"V";
        if(num==4)
        {
            res+="IV";
        num=0;
        }
         //  int I=num;
        for(int i = 0 ;i<num;i++)
            res=res+"I";
        return res;
    }
};
