class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> res;
        for(int i=1; i<=n; i++) {
            if((n % i) == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};