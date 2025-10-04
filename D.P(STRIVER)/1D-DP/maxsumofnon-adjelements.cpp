#include<bits/stdc++.h>
using namespace std;
/*Given an integer array nums of size n. 
Return the maximum sum possible using the elements of nums such that no two elements taken are adjacent in nums.*/
int solvedp(vector<int>&arr){
    int n=arr.size();
    vector<int>dp(n,0);
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
    }
    return dp[n-1];
}
//recursive approach
int solve(int i,vector<int>&arr,int sum){
    if(i>arr.size())
    return sum;
    int suminclude=solve(i+1,arr,sum);
    //sum-=arr[i];
    int sumexclude=solve(i+2,arr,sum+arr[i]);

    return max(suminclude,sumexclude);

}
int main(){
    vector<int>arr{2,7,9,3,1};
    cout<<solve(0,arr,0)<<endl;
    cout<<solvedp(arr);
}