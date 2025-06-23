class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m = m + n;
        int p1 = m-n-1, p2 = n-1, k = m-1;
        while(p1 >= 0 && p2 >= 0) {
            if(nums1[p1] > nums2[p2]) {
                nums1[k--] = nums1[p1--];
            }
            else {
                nums1[k--] = nums2[p2--];
            }
        }

        while(p1 >= 0) {
            nums1[k--] = nums1[p1--];
        }
        while(p2 >= 0) {
            nums1[k--] = nums2[p2--];
        }
    }
};