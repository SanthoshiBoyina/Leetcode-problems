class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low = 1, high = num;
        while(low <= high) {
            long long int mid = (low + high)/2;
            if(mid * mid == num)
                return true;
            else if(mid*mid < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};