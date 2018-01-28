class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int counts = 0;
        for(int i=L;i<=R;i++){
            bitset<32> num_set(i);
            if(isPrime(num_set.count()))
                counts++;
        }
        return counts;
    }
    
    bool isPrime(int n){
        if(n == 2)
            return true;
        if(n < 2)
            return false;
        int sqrt_n = sqrt(n)+1;
        for(int i=2;i<sqrt_n;i++)
            if(n%i == 0)
                return false;
        return true;
    }
};