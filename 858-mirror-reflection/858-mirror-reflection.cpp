class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(p % 2 != 1 && q % 2 != 1){   //divide until one become odd
            p /= 2;
            q /= 2;
        }
        // p -- odd && q -- even
        if(p%2 == 1 && q%2 == 0) return 0;
        // p -- odd && q -- odd
        if(p%2 == 1 && q%2 == 1) return 1;
        // p -- even && q -- even
        if(p%2 == 0 && q%2 == 1) return 2;
        return -1;
    }
};