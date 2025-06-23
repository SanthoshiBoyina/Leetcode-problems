class Solution {
  public:
    // Function to count inversions in the array.
    long long int count;
    
    void merge(vector<int> &arr, int low, int mid, int high) {
        int p1 = low, p2 = mid+1, k = 0;
        vector<int> temp (high - low + 1);
        
        while(p1 <= mid && p2 <= high) {
            if(arr[p1] <= arr[p2]) {
                temp[k++] = arr[p1++];
            }
            else {
                count += (mid - p1 + 1);
                temp[k++] = arr[p2++];
            }
        }
        
        while(p1 <= mid) {
            temp[k++] = arr[p1++];
        }
        
        while(p2 <= high) {
            temp[k++] = arr[p2++];
        }
        
        for(int i=0; i<(high - low + 1); i++) {
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
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        count = 0;
        mergeSort(arr, 0, arr.size()-1);
        return count;
    }
};