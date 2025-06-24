class Solution {
  public:
  
     void merge(vector<int> &ar, int low, int mid, int high) {
        int p1 = low, p2 = mid+1, k = 0;
        vector<int> temp (high - low + 1);
        while(p1 <= mid && p2 <= high) {
            if(ar[p1] < ar[p2]) {
                temp[k++] = ar[p1++];
            }
            else {
                temp[k++] = ar[p2++];
            }
        }
        
        while(p1 <= mid) {
            temp[k++] = ar[p1++];
        }
        while(p2 <= high) {
            temp[k++] = ar[p2++];
        }
        
        for(int i=0; i<(high - low + 1); i++) {
            ar[i+low] = temp[i];
        }
    }
  
    void mergeSort(vector<int> &a, int low, int high) {
        if(low >= high) {
            return;
        }
        
        int mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
  
    bool twoSum(vector<int>& nums, int target) {
        mergeSort(nums, 0, nums.size()-1);
        int p1 = 0, p2 = nums.size() - 1;
        vector<int> res;
        while(p1 < p2) {
            if(nums[p1] + nums[p2] < target) {
                p1++;
            }
            else if(nums[p1] + nums[p2] > target) {
                p2--;
            }
            else {
                return true;
            }
        }
        return false;
        
    }
};