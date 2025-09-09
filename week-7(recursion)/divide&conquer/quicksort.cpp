#include<bits/stdc++.h>
using namespace std;

// int partitionhighaspivot(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);  
//     return i + 1;
// }

int partitionlowaspivot(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int k = high;
    for (int j = high; j > low; j--) {
        if (arr[j] > pivot) {
            swap(arr[j], arr[k]);
            k--;
        }
    }
    swap(arr[k], arr[low]);  
    return k;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partitionlowaspivot(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {8,3,4,1,20,50,30};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
