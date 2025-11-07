#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int i,int sum){
    if(i==arr.size())
    return sum;
    int exclude=solve(arr,i+1,sum);
    int newsum=sum+arr[i];
    int include=solve(arr,i+1,newsum);

    return max(exclude,include) ;
    
}
int main(){
    vector<int>arr{5,4,-1,7,8};
    cout<<solve(arr,0,0);
    return 0;
}