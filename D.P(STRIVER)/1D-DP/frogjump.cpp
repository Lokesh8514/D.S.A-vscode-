#include<bits/stdc++.h>
using namespace std;


//dp tabulation approach
int solvedp(vector<int>&arr){
   int n=arr.size();
   vector<int>dp(n,0);
   dp[0]=0;
   dp[1]=abs(arr[0]-arr[1]);
   for(int i=2;i<n;i++){
      dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));

   }
   return dp[n-1];
}
//recursive approach
// int solver(int i,vector<int>&arr,int ec){
//     if(i>=arr.size())
//     return INT_MAX;
//     if(i==arr.size()-1)
//     return ec;
//     //1step
//     int jump1=solve(i+1,arr,ec+abs(arr[i]-arr[i+1]));
//     //2step
//     int jump2=solve(i+2,arr,ec+abs(arr[i]-arr[i+2]));
//     return min(jump1,jump2);
// }
int main(){
    vector<int>arr{3, 10, 3, 11, 3};
   //cout<<"minimum energy consumed to reach n-1th step: "<<solver(0,arr,0);
   cout<<"minimum energy consumed to reach n-1th step: "<<solvedp(arr);
    return 0;
}