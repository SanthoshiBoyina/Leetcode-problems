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
  
  
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        
        int n = a.size(), m = b.size();
        int p1 = n-1, p2 = 0;
        while(p1 >= 0 && p2 <= m-1) {
            if(a[p1] > b[p2]) {
                int temp = a[p1];
                a[p1] = b[p2];
                b[p2] = temp;
                
                p1--;
                p2++;
            }
            else {
                break;
            }
        }
        
        mergeSort(a, 0, n-1);
        mergeSort(b, 0, m-1);
    }
};