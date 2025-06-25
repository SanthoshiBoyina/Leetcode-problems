class Solution {
public:

void merge(vector<int> &arr, int low, int mid, int high) {
    int p1 = low, p2 = mid+1, k=0;
    vector<int> temp (high - low + 1);
    while(p1 <= mid && p2 <= high) {
        if(arr[p1] < arr[p2]) {
            temp[k++] = arr[p1++];
        }
        else {
            temp[k++] = arr[p2++];
        }
    }

    while(p1 <= mid) {
        temp[k++] = arr[p1++];
    }
    while(p2 <= high) {
        temp[k++] = arr[p2++];
    }

    for(int i=0; i<(high-low+1); i++) {
        arr[i+low] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low >= high)
        return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

    int solve(vector<int> &nums, int low, int high) {
        int mid = (low + high)/2;
        if((nums[mid-1] != nums[mid]) && (nums[mid] != nums[mid+1]))
            return nums[mid];
        if(mid%2 == 0) {
            if(nums[mid] == nums[mid+1])
                return solve(nums, mid+2, high);
            else if(nums[mid] == nums[mid-1])
                return solve(nums, low, mid-2);
        }
        else {
            if(nums[mid] == nums[mid+1])
                return solve(nums, low, mid-1);
            else if(nums[mid] == nums[mid-1])
                return solve(nums, mid+1, high);
        }
        return -1;
    }

    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        if(n == 1)
            return nums[0];
        if(nums[0] != nums[1])
            return nums[0];
        if(nums[n-2] != nums[n-1])
            return nums[n-1];
        return solve(nums, 0, n-1);
    }
};