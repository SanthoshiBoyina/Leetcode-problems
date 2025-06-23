#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

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
    display(arr);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);
    return 0;
}