#include<bits/stdc++.h>
using namespace std;
int  solve3(vector<int> &arr,int i,int sum){
    if(i>arr.size()) {
        return sum;
    };
    return max(solve3(arr,i+1,sum),solve3(arr,i+2,sum+arr[i]));
}
// void solve3(vector<int> &arr,int &n,int i,int ans,int &maxi){
//     if(i>n) {
//         maxi=max(ans,maxi);
//         return;
//     };
//     //exclude
//     solve3(arr,n,i+1,ans,maxi);
//     //include
//     solve3(arr,n,i+2,ans+arr[i],maxi);
// }
//Cut into segments;
int solve2(int n,int x,int y, int z){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    int ans1=solve2(n-x,x,y,z)+1;
    int ans2=solve2(n-y,x,y,z)+1;
    int ans3=solve2(n-z,x,y,z)+1;
    int ans=max(ans1,max(ans2,ans3));
    return ans;


}
//min no.of elements required to get target sum;
int solve1(vector<int>arr,int target){
    if(target==0)
    return 0;
    if(target<0) return INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve1(arr,target-arr[i]);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    return mini;

}
int main(){
    // vector<int> arr{1,2,3};
    // int target=7;
   // cout<<solve1(arr,target); 
//    int N=7,X=5,Y=2,Z=2;
//    int a=solve2(N,X,Y,Z);
//    if(a<0) cout<<0;
//    cout<<a;
    vector<int> arr{9,8,7,4};
    int n=arr.size();
    int i=0;
    int ans=0;
    int maxi=INT_MIN;
    
    //solve3(arr,n,i,ans,maxi);
    //cout<<maxi;
    cout<<solve3(arr,0,0);
    
    return 0;

}