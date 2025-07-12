class Solution {
public:

    void reverseArray(vector<int> &nums, int low, int high) {
        int p1 = low, p2 = high;
        while(p1 < p2) {
            int temp = nums[p1];
            nums[p1] = nums[p2];
            nums[p2] = temp;
            p1++;
            p2--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, n-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, n-1);
    }
};