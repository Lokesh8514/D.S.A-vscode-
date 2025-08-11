#include<bits/stdc++.h>
using namespace std;
// int fib(int n)
// {

// if(n==1) return 0;
// if(n==2) return 1;
//     return fib(n-1)+fib(n-2);
// }
// void printdigits(int n){
//     if(n==0) return;
   
//    // int newn =n/10;
//     printdigits(n/10);
//     cout<<n%10<<" ";
// }
// bool issorted(int arr[],int n,int i){
//     if(i>=n-1) return true;
//     if(arr[i]<=arr[i+1])
//     return issorted(arr,n,i+1);
//     else 
//     return false;
    
// }
// int binarysearch(vector<int> &arr,int n,int s,int e,int key ){
//     int mid=s+(e-s)/2;
//     if(s>e) return -1;
//     if(arr[mid]==key)
//     return mid;
//     else if(arr[mid]>key){
//         e=mid-1;
//         return binarysearch(arr,n,s,e,key);
//     }
//     else{
//         s=mid+1;
//     return binarysearch(arr,n,s,e,key);
// }
// }
void printsubsequence(string str,string output,int n,int i,vector<string>&v){
    if(i>=str.length()){
        v.push_back(output);
       // cout<<output<<" ";
        return ;
    }
    //exclude
    printsubsequence(str,output,n,i+1,v);
    //include
    output.push_back(str[i]);
    printsubsequence(str,output,n,i+1,v);

}
int main(){
    string str="abc";
    string output="";
    vector<string>v;
    int n=str.size();
    int i=0;
    printsubsequence(str,output,n,i,v);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl<<"size of v:"<<v.size();

    
    // vector<int> arr{1,2,3,4,5,6};
    // int n=arr.size();
    //int i=0;
//    bool checksorted= issorted(arr,n,i);
//    if(checksorted)
//    cout<<"sorted";
//    else cout<<"not sorted";
// int key=5;
// int s=0;
// int e=n-1;
// int ans=binarysearch(arr,n,s,e,key);
// cout<<"key found at index: "<<ans;
  
    //printdigits(n);
    //cout<<fib(n);
    return 0;
}