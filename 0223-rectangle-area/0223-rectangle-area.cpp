class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a = (ax2 - ax1) * (ay2 - ay1);
        int b = (bx2 - bx1) * (by2 - by1);
        int c1 = min(ax2, bx2) -  max(ax1, bx1);
        int c2 = min(ay2, by2) - max(ay1, by1);
        int carea = 0;
        if(c2 > 0 && c1 > 0){
            carea = c1*c2;
        }
        return (a + b - carea);
    }
};