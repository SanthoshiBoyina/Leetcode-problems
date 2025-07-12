class Solution {
public:
    void rotate(vector<int>& nums, int K) {
        int n = nums.size();
        for(int k=0; k<K; k++) {
            int temp = nums[n-1];
            for(int i=n-2; i>=0; i--) {
                nums[i+1] = nums[i];
            }
            nums[0] = temp;
        }
    }
};