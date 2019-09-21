// https://leetcode.com/problems/multiply-strings/
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
     vector<int> resultat(n1+n2,0);
        for(int i=n1-1;i>=0;i--)
        {
            int poslednyacifra;
            int current =0;
            for(int j=n2-1;j>=0;j--)
            {
poslednyacifra=resultat[i+j+1]+current+(num1[i]-'0')*(num2[j]-'0');//добавляем тек.результат + разряд с прошлого умножения + произведение двух цифр
resultat[i+j+1]=poslednyacifra%10;// ищем i+j+1 цифру ответа
current= poslednyacifra/10;
            }
            if(current>0)
            {
                resultat[i]=current;
            }
        }
        string res="";
        for(int i=0;i<n1+n2;++i)
        {
            res.append(1,resultat[i]+'0'); //добавляем в конец кол-во символов = 1, (после запятой тип Char.)  берем код символа r[i] и добавляем '0' 
            // получим в диапазоне '0'-'9', добавляем вначало
        }
       size_t first_non_zero=res.find_first_not_of('0');
        if (first_non_zero!=string::npos) //если первый ноль не в конце строки 
        {
            return string(res,first_non_zero);
        }
        else
        {
            return "0";
        }
        
        }
};
