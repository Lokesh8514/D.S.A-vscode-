#include<iostream>
#include<vector>
using namespace std;
// void spiralprint(vector<vector<int>>v,ans){
//     vector<int>ans;
//     int m=v.size();
//     int n=v[0].size();
//     int total_elements=m*n;
//     int startingrow=0;
//     int endingrow=m-1;
//     int startingcol=0;
//     int endingcol=n-1;
//     int count=0;
//     while (count<total_elements ){}
//     {
//         for(int i=startingcol;i<endingcol&&count<total_elements;i++){
//             ans.push_back(v[startingrow][i]);
//             count++;
//         }
//         startingrow++;
//          for(int i=startingrow;i<endingrow&&count<total_elements;i++){
//             ans.push_back(v[i][endingcol]);
//             count++;
//         }
//         endingcol--;
//          for(int i=endingcol;i<startingcol&&count<total_elements;i++){
//             ans.push_back(v[endingrow][i]);
//             count++;
//         }
//         endingrow--;
//          for(int i=endingrow;i<startingrow&&count<total_elements;i++){
//             ans.push_back(v[i][startingcol]);
//             count++;
//         }
//         startingcol++;
//     }


// }
//wave print of 2d matrix
// void waveprint(vector<vector<int>>v){
// int m=v.size();
// int n=v[0].size();
// for(int j=0;j<n;j++){
//     if((j&1)==0){
//         for(int i=0;i<m;i++){
//             cout<<v[i][j]<<" ";
//         }
//     }
//     else{
//         for(int i=m-1;i>=0;i--){
//             cout<<v[i][j]<<" ";
//         }
//     }
// }
// }
int main(){
    vector<int>arr{1,2,3,4,5};
    int n =5;
    for(int i=n-1;i<=0;i--){
        cout<<arr[i]<<" ";
    }

//     vector<int>ans;
//     vector<vector<int>>v{
//         {1,2,3,4},  
//         {5,6,7,8},
//         {9,1,11,12}

//     };
//    // waveprint(v);
//     spiralprint(v,ans);
//     for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
    return 0;
}
// int duplicate(int arr,int n,int index){
//     int index=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(arr[i]==arr[j])
    
//             index=i;
//         }
//     }
//     return arr[index];

// }
// int main(){
//     int index =-1;
//     vector<int>arr{0,1,2,0,1,2};
//     int n =arr.size();
//         for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(arr[i]==arr[j]){
//             index=i;
//             break;
//         }
//         }
//     }
//     cout<<index;

// // int index=0;
// //     duplicate(arr,n);

//     return 0;


// }
//moving -ve elements to one side//
/* void movingnegativeve(int arr,int n,int start);{
//     int start=0;
//     for(int i=0;i<n;i++){
//         if
//     }
// }*/
// int main(){
    
//     int start=0;
//     vector<int>arr{1,-2,4,-6,-3,9};
// int n=arr.size();
//     //movingnegativeve(arr,n,start);
// for(int i=0;i<n;i++){
//     if(arr[i]>=0){
      
//       continue;
//     }
// if(arr[i]<0){
//     swap(arr[i],arr[start]);
//     start++;
// }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";

// }
// return 0;
// }