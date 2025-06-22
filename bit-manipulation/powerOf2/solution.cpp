class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        int x = log2(n);
        return n == (1 << x);
    }
};