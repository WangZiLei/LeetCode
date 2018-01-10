class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int counts = 0;
        while(a){
            counts += a%2;
            a = a>>1;
        }
        return counts;
    }
};
