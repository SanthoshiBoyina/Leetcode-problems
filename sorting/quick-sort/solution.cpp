class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low >= high)
            return;
         
        int mid = partition(arr, low, high);
        quickSort(arr, low, mid-1);
        quickSort(arr, mid+1, high);
    }

  public:
  
    void swap(vector<int> &arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    int partition(vector<int>& arr, int low, int high) {
        int start = low, end = high, pivot = arr[low];
        
        while(start < end) {
            while(start <= high && arr[start] <= pivot) {
                start++;
            }
            while(end >= 0 && arr[end] > pivot) {
                end--;
            }
            if(start < end) {
                swap(arr, start, end);
            }
        }
        swap(arr, low, end);
        return end;
        
    }
};