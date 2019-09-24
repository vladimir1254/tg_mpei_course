// https://leetcode.com/problems/permutation-sequence/submissions/
class Solution {
public:
    string getPermutation(int n, int k) {
        
     string s(n,'0');
                int num=1;
        int j=0;
            for(int i=1; i<=n; i++){
            num*=i;
           s[i-1]+=i; // 12345..n
        }
     k--;//индекс строк начинается с 1.
        for(int i=0;i<n;i++)
        {
            num/=(n-i);//(n-1)!
            j=i+k/num; //находим индекс символа из строки 12345
            char c=s[j];
            while(j>i)
            {
                s[j]=s[j-1];// сдвигаем строку вправо на j-i;
                j--;
            }
            k%=num;
            s[i]=c;//ставим символ на нужное место
        }
    return s;
    }
};
