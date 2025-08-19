#include<bits/stdc++.h>
using namespace std;
void printsubarrays_util(vector<int>&arr,int &n,int s,int j){
    if(j>n) return ;
    for( int i=s;i<j;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printsubarrays_util(arr,n,s,j+1);
}
void printsubarrays(vector<int>&arr){
    int n=arr.size();
    
    for(int s=0;s<n;s++){
        int j=s;
        printsubarrays_util(arr,n,s,j);
    }
 }
int main(){
    vector<int>arr{1,2,3,4,5};
    printsubarrays(arr);
    return 0;
}