#include<bits/stdc++.h>
using namespace std;
// void fib(int n){
//     if(n==0){
//     cout<<0;
//     return ;}
//     if(n==1){
//     cout<< 1;
//     return ;}
//     int ans=fib(n-1)+fib(n-2);
//     cout<< ans;
// }
void solve(int n){
    if(n==0)
    return ;
    cout<<n%10;
    int newn=n/10;

    solve(newn);

   
}
int main(){
    int n=647;
    solve(n);
    //cin>>n;
    //fib(n);
    return 0;
}