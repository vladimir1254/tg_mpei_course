// https://leetcode.com/problems/rectangle-area/
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int ac=C-A;// 0 0 0 0 -1 -1 1 1
        int bd = D-B;
        int eg=G-E;
        int fh=H-F;
        int left = max(A,E);
            int right = min(C,G);
            int bottom =max(F,B);
            int top = min(D,H);
        if(right>left && top>bottom)
        return ac*bd-(right-left)*(top-bottom)+eg*fh;
        else
            return ac*bd+eg*fh;
    }
};
