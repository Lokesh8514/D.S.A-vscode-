#include <iostream>
#include<vector>
using namespace std;

int smallest(vector<int> arr,int i){
    int ans=INT_MAX;
    int index=-1;
    for(int j=i;j<arr.size();j++){
        if(ans<arr[i]){
            ans=arr[i];
            index=i;
        }
        
    }
    return index;
}
int main(){
    
}
// int main(){
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
   
    
//         for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selectionsort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }