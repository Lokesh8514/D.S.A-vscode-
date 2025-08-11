#include <iostream>
#include<vector>
using namespace std;
bool  BS2Darray(int arr[][3],int rows,int cols, int target){
    
    int s=0;
    int e=rows*cols-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowindex=mid/cols;
        int colindex=mid%cols;
        if(arr[rowindex][colindex]==target){
           
            return true;
        }
        else if(arr[rowindex][colindex]>target){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return false;

}
// int findsqurt(int n){
//     int s=0;
//     int e=n;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(mid*mid>n){
//             e=mid-1;
//         }
//         else if(mid*mid<n){
//             ans=mid;

//             s=mid+1;
//         }
//         else if(mid*mid==n){
//             return mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// } 
int main(){
    int arr[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    int target=1;
    bool ans=BS2Darray(arr,rows,cols,target);
    if(ans){
        cout<<"target  found "<<endl;
    }
    else{
        cout<<"target  not found"<<endl;
    }

    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // int sqr=findsqurt(n);
    // cout<<"square root is "<<sqr<<endl;
    return 0;
}