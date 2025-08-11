
#include <iostream>
#include <climits>
//#include<math.h>
#include <vector>
using namespace std;
//linear search//
// int a=-1;
//     int b=-1;
// bool findkey(int arr[][3],int rows,int cols,int key){
    
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key)
//             a=i;
//             b=j;
//             return true;
//         }
//     }
//     return false;
// }

//mix or min in 2d array//
//one func can return only 1 value at a time mk                                        
// int findmaxormin(int arr[][3],int rows,int cols){
//     int max=INT_MIN;
//     int min=INT_MAX;
//    for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]> max)
//            max=arr[i][j];
//            if(arr[i][j]< min)
//           min=arr[i][j];
//         }
//     }
//     // return max;
//     return min;
// }
void transpose(int arr[][3],int rows ,int cols,int transposearr[][3]){
        for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      transposearr[i][j]=arr[j][i];
    }
   
      }
}
      void printarray(int transposearr[][3],int rows ,int cols){
         for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cout<<transposearr[i][j]<<" ";
        
    }
    cout<<endl;
      }
}
int main() {
    int arr[3][3]={{1,2,3,},{1,1,4},{7,8,9}};
    int rows=3;
    int cols=3;
    int transposearr[3][3];
  transpose(arr,rows,cols,transposearr);
  printarray(transposearr,rows,cols);
    // for(int i=0; i<rows; i++){
    // for(int j=0; j<cols; j++){
    //   cout<<arr[i][j]<<" ";
        
    // }
    // cout<<endl;
    //   }
    
//mix or min in 2d array//
// int maxinum=findmaxormin(arr,rows,cols);
// int mininum=findmaxormin(arr,rows,cols);
// cout<<"maximum num is "<<maxinum<<" "<<endl;
// cout<<"minimum num is "<<mininum<<" "<<endl;

//linear search//
//     if(findkey(arr,3,3,1)){
//         cout<<"key found at"<<arr[a][b]<<endl;
//     }
//     else{
//         cout<<"key not found"<<endl;
//     }

    //majority element//
//   int maxcount=0;
//   int count=0;
//   int index=-1;
//   vector<int> arr{3,3,4,2,4,4,2,4};
//   int n= arr.size();
//   //int element=arr[i];
//   //if()
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       if(arr[i]==arr[j]){
//         count++;
//       }
     
//     }
//     if (count > maxcount) {
//             maxcount = count;
//             index = i;
//         }
//     }
//   if(maxcount>n/2){
//     cout<<"majority element is "<<arr[index]<<endl;
//   }
//   else
//   cout << "No Majority Element" << endl;
    
    
  
 
  //left rotate array//
  // cout<<"enter the no.of posoitions to rotate"<<endl;
  // cin>>n;
  // for(int i=0;i<n;i++){
  // for(int i=0;i<arr.size()-1;i++){
  //   swap(arr[i],arr[i+1]);
  // }
  // }
 
  // for(auto i: arr){
  //   cout<<i<<" ";
  // }
  // for(int i=0;i<arr.size();i++){
  //   cout<<arr[i]<<" ";
  // }
  //vector<int>arr{0,1,1,0,0,1,1,0,0,1,0,1,};
//   int i=0;
//   int start=0;
//   int end=arr.size()-1;
//   while(i!=end){
//       if(arr[i]==0){
//           swap(arr[start],arr[i]);
//           start++;
//           i++;
//       }
//        else{
//           swap(arr[end],arr[i]);
//           end--;
//       }
//   }
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i];
// }

    return 0;
}
//3 sum //
// int main() {
//   int target;

// //vector<int>arr;
//   // cout<<"enter the values of array:"<<endl;
//   //   for(int i=0;i<arr.size();i++){
//   //     arr.push_back(i);
//   //   }
//   cout<<"enter the value of target:"<<endl;
//   cin>>target;
//   vector<int>arr ={1,2,3,4,5,6,7,8};
//   //int sizearr = 4;
//   for(int i=0;i<arr.size();i++){
//       for(int j=1;j<arr.size();j++){
//         for(int k=2;k<arr.size();k++){
//           if(arr[i]+arr[j]+arr[k]==target){
//               cout<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
//             arr[i]=INT_MIN;
//           }
//       }
//   }
//   }
//   return 0; 
// }
