// //selection sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr,int N) {
   // int n = arr.size();
    int swaps=0;

    for (int i = 0; i < N- 1;i++) {

        int min_idx = i;
        
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        swap(arr[i], arr[min_idx]);
        //swaps++;
    }
        for (int &val : arr) {
        cout << val << " ";
    }
    //return swaps;
}

// void printArray(vector<int> &arr) {
//     for (int &val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

int main() {
    // vector<int> arr = {64, 25, 12, 22, 11};
    int n;
    cin>>n;
    int N=2*n;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    // cout << "Original array: ";
    // printArray(arr); 

    selectionSort(arr,N);

    // cout << "Sorted array: ";
    // printArray(arr);
    //cout<<selectionSort(arr);
    return 0;
}
//bubble sort
 
// int bubbleSort(vector<int>& arr) {
//     int swaps=0;
//     int n = arr.size();
//     bool swapped;
  
//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swaps++;
//                 swapped = true;
//             }
//         }
      
//         // If no two elements were swapped, then break
//         if (!swapped)
//             break;
//     }
//     return swaps;
// }

// // // Function to print a vector
// // void printVector(const vector<int>& arr) {
// //     for (int num : arr)
// //         cout << " " << num;
// // }

// int main() {
//     vector<int> arr = { 6, 34, 25, 12, 22, 11, 90 };
//     cout<<bubbleSort(arr);
//     // cout << "Sorted array: \n";
//     // printVector(arr);
//     return 0;
// }