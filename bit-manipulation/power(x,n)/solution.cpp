class Solution {
public:

    bool checkBit(long long int n, int i) {
        return (n >> i) & 1;
    }

    double myPow(double a, int num) {
        long long int n = (num < 0) ? (long long int)num*-1 : num;
        double res = 1, x = a;
        for(int i=0; i<=log2(n); i++) {
            if(checkBit(n, i))
                res = res * x;
            x = x * x;
        }
        return (num < 0) ? 1/res : res;
    }
};