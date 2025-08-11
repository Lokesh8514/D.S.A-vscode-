#include<bits/stdc++.h>
using namespace std;
// string greedyapproachsolve(int n){
//      if(n==2)
//     return "4";
//     if(n==1)
//     return "3";
//     string a="";
//       while(n>0){
//         if(n % 2==0)
//         a="4"+a;
//         else
//         a="3"+a;

//         n=(n-1)/2;
//       }
//       return a;
// }

int main(){
    int n;
    cin>>n;
    /*dp approach*/
    vector<int>dp(n);
    int i=0;
    dp[0]=3;
    dp[1]=4;
    for(int j=2,i=0;j<n;i++){
    dp[j++]=dp[i]*10+3;
    dp[j++]=dp[i]*10+4;

    }
    cout<<dp[n-1];
   //cout<<greedyapproachsolve(n);
   return 0;

}