class Solution {
  public:
    // You need to complete this function

    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n == 0)
            return 0;
        int res = 0;
        res += towerOfHanoi(n-1, from, aux, to);
        res += 1;
        res += towerOfHanoi(n-1, aux, to, from);
        return res;
    }
};