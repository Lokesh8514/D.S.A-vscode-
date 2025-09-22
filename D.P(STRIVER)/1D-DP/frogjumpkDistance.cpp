#include<bits/stdc++.h>
using namespace std;
/*This is a follow-up question to “Frog Jump” discussed in the previous article. 
In the previous question, the frog was allowed to jump either one or two steps at a time. 
In this question, the frog is allowed to jump up to ‘K’ steps at a time. If K=4, 
the frog can jump 1,2,3, or 4 steps at every index.*/
int solve(vector<int>&arr,int k){
   int n=arr.size();
   vector<int>dp(n,0);
   dp[0]=0;
   for(int i=1;i<n;i++){
    int mmsteps=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            int jump=dp[i-j]+ abs(arr[i]-arr[i-j]);
            mmsteps=min(mmsteps,jump);
        }
    }
     dp[i]=mmsteps;

   }
   return dp[n-1];
}
int main(){
    vector<int>arr{10,5,20,0,15};
    int k=2;
   cout<<solve(arr,k);
    return 0;
}