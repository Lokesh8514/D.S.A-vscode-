#include <iostream>
#include <vector>
using namespace std;

int partitionhighaspivot(vector<int>& arr, int low, int high) {

    // choose the pivot
    int pivot = arr[high];
  
    // undex of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[low..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}
int partitionlowaspivot(vector<int>& arr, int low, int high) {

    // choose the pivot
    int pivot = arr[low];
  
    // undex of smaller element and indicates 
    // the right position of pivot found so far
    int k = high;

    // Traverse arr[low..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = high; j >low; j++) {
        if (arr[j] < pivot) {
            swap(arr[k], arr[j]);
            k--;
        }
    }
    
    // move pivot after smaller elements and
    // return its position
    swap(arr[k], arr[low]);  
    return k;
}

// the QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {
  
    if (low < high) {
      
        // pi is the partition return index of pivot
        int pi = partitionlowaspivot(arr, low, high);
        //int pi = partitionhighaspivot(arr, low, high);
        // recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}