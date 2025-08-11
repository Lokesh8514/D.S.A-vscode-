#include <iostream>
#include<vector>
using namespace std;
int peakelement(vector<int>arr,int n){
    int s=0;
    int ans =-1;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return s;

//    while(s<e){
//         if(arr[mid-1]<arr[mid]&&arr[mid+1]>arr[mid]){
//             // return mid;
//             ans=mid;
//         }
//         else if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else if(arr[mid]>arr[mid+1]){
//             e=mid;
//         }
//         mid=s+((e-s)/2);
//     }
//     return ans;

 }
int main(){
    vector<int>arr{1,5,9,2,0};
    int n=arr.size();
    int peak=peakelement(arr,n);
    cout<<"peak element is "<<arr[peak]<<endl;
    return 0;
}
// int lastoccurence(vector<int>arr,int n,int target){
//     int ansl=-1;
//     int s=0;
//     int end=n-1;
//     int mid=s+((end-s)/2);

// while(s<=end){
//         if(arr[mid]==target){
//             ansl=mid; 
//             s=mid+1;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         mid=s+((end-s)/2);
//     }
//     return ansl;

// }
// int firstoccurence(vector<int>arr,int n,int target){
//     int ans=-1;
//     int s=0;
//     int end=n-1;
//     int mid=s+((end-s)/2);

// while(s<=end){
//         if(arr[mid]==target){
//             ans=mid; 
//             end=mid-1;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         mid=s+((end-s)/2);
//     }
//     return ans;

// }
// int main(){
//     vector<int>arr{1,3,4,4,4,4,6};
//     int n= arr.size();
//     int target=4;
//     int ans= firstoccurence(arr,n,target);
//     int ansl= lastoccurence(arr,n,target);
//     cout<<"first occurence of element is "<<ans<<endl;
//     cout<<"last occurence of element is "<<ansl<<endl;
//     return 0;

// }
// int binarysearch(int arr[],int n,/*int mid*/int key){
//     int a=0;
//     int b=n-1;
//     // int mid=(a+b)/2;
//     //int mid=a+(b-a)/2;
//    int mid=(a/2)+(b/2);
//     while(a<=b){
//     if(arr[mid]==key){
//         // cout<<"found"<<endl;
//         return mid;
//     }
//     else if(arr[mid]>key){
//         b=mid-1;
//     }
//      else if(arr[mid]<key){
//         a=mid+1;
//     }
//     //mid=(a+b)/2;
//     //mid=a+(b-a)/2;
//      mid=(a/2)+(b/2);
    
//     }

// return -1;
// }
// int main(){
//     // vector<int>arr{1,2,3,4,5};
//     int arr[]={1,2,3,4,5,6};
//     int n= 6;
//     int key=4;
//     int keyfoundat=binarysearch(arr,n,key);
//     if(keyfoundat==-1){
//         cout<<"key not found"<<endl;

//     }
//     else{
//     cout<<"key found at index "<<keyfoundat<<endl;
//     }

//     return 0;

// }