class Solution {
public:

    bool solve(int num, long long int low, long long int high) {
        if(low > high)
            return false;
        long long int mid = (low + high)/2;
        if(mid*mid == num)
            return true;
        if(mid*mid < num)
            return solve(num, mid+1, high);
        else 
            return solve(num, low, mid-1);
    }

    bool isPerfectSquare(int num) {
        return solve(num, 1, num);
    }
};