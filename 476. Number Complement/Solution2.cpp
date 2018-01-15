class Solution {
public:
    int findComplement(int num) {
        long long a = 1;
        while(a<=num){
            a = a<<1;
        }
        return a-num-1;
    }
};