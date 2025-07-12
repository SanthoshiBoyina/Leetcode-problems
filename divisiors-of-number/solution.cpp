class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> res;
        for(int i=1; i<=sqrt(n); i++) {
            if((n % i) == 0) {
                res.push_back(i);
            }
        }
        int resSize = res.size();
        for(int i=resSize-1; i>=0; i--) {
            if(res[i] * res[i] == n) 
                continue;
            res.push_back(n/res[i]);
        }
        return res;
    }
};