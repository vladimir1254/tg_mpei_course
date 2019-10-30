// https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int x, int y) {
  
    int k=0;
    int e=0;
    if(x>=y) {
        cout << " otv = " << k;
        return x - y;
    }
    else {
        while(y!=x)   // от обратного y ++ и y/2;
        {
            if(x==1) {
                if (y % 2 == 0) {
                    y = y / 2;
                    k++;
                } else {
                    y++;
                    e++;
                }
            } else{

                if (y % 2 == 0 && y>x) {
                    y = y / 2;
                    k++;
                } else {
                    y++;
                    e++;
                }

            }
        }
    }
        return e+k;
    } 
  
};
