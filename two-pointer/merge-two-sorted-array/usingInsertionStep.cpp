class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m = m + n;
        int k = 0;
        for(int i=m-n; i<m; i++) {
            int j = i-1, temp = nums2[k++];
            while(j>=0 && nums1[j] > temp) {
                nums1[j+1] = nums1[j];
                j--;
            }
            nums1[j+1] = temp;
        }
    }
};