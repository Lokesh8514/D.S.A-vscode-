//Enhance your coding skills, start writing your code here!!
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target){
  int s=0;
  int e=n-1;
  int index=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==target)
    index=i;
  }
  
 
//   while(s<=e){
//      int mid=s+(e-s)/2;
//     if(arr[mid]==target)
//     index = mid;
//     else if(arr[mid]>target)
//     e=mid-1;
//     else
//     s=mid+1;
//   }
  return index;
  
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  //int ans=binarysearch(arr,n,target);
  // if(ans==-1){
  //   cout<<"Element not found!"<<endl;
  // }
  // else{
  //   cout<<ans;
  // }
  cout<<binarysearch(arr,n,target);
  return 0;

}