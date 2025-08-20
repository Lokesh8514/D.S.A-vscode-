#include<bits/stdc++.h>
using namespace std;
#include<iostream>
 using namespace std;
//  void maxreplace(int size, vector<int>&arr)
//  {
//     //int  i;
//     int max = arr[0];
//     if(size>0)
//     {
        
//         for(int i=0;i<size;i++)
//         {
//             if(max<arr[i])
//             {
//                 max = arr[i];
//             }
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         arr[i]=max;
//         cout<<arr[i]<<" ";
//     }
//  }
int calculateMatrixSum(int rows, int columns, vector<vector<int>> &matrix) {
    int sum = 0;
    if ((rows > 0) && (columns > 0)) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (i == j) {
                    if (matrix[i][j] % 2 != 0)
                        sum += matrix[i][j];
                }
            }
        }
    }
    return sum;
}


int main(){
    // vector<int>arr{1,2,3,4,5,6};
    // maxreplace(arr.size(),arr);
        vector<vector<int>> matrix = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 9, 11}
    };
    cout << "Sum (matrix) = " << calculateMatrixSum(3, 3, matrix) << endl;
    return 0;
}