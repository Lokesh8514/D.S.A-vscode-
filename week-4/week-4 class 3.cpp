#include <iostream>
#include<vector>
using namespace std;
double division(int D,int d,int percision){
    int s=0;
    int e=abs(D);
    int ans=-1;
    int mid=s+(e-s)/2;
   

    while(s<=e){
        if(abs(mid*d)>abs(D)){
            e=mid-1;
        }
        else if(abs(mid*d)<abs(D)){
            ans=mid;
            s=mid+1;
        }
        else if(abs(mid*d)==abs(D)){
            ans=mid;
            break;
        }
        mid=s+(e-s)/2;
    } 
         double finalans=ans;
         double step=0.1;
    
    for(int i=0;i<percision;i++){
        for(double j=finalans;j*d<D;j=j+step){
            finalans=j;
        }
        step=step/10;
    }


    if((d<0&&D<0)||(d>0&&D>0)){
         return finalans;
    }
    else{
        return -finalans; 
    }
   
    }
// int BSnearlysortedarray(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid-1>=s&&arr[mid-1]==target){
//             return mid-1;
//         }
//         if(mid+1<=e&&arr[mid+1]==target){
//             return mid+1;
//         }
//         else if(arr[mid]>target){
//             e=mid-2;
//         }
//         else if(arr[mid]<target){
//             s=mid+2;
//         }
//        mid=s+(e-s)/2; 
//     }
//     return -1;
// }
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 40;
    //int ans= BSnearlysortedarray(arr,target);
    double quotient =division(5,-3,2);
    cout<<"the quotient is: "<<quotient<<endl;
    // if(ans==-1){
    //     cout<<"target not found";
    // }
    // else{
    //     cout<<"target found at: "<<ans<<endl;
    // }
return 0;

}