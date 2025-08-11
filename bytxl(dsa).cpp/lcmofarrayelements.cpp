#include<bits/stdc++.h>
using namespace std;
// int lcmofarray(vector<int>&arr){
// int curentlcm=arr[0];
// for(int i=1;i<arr.size();i++){
//     curentlcm=lcm(curentlcm,arr[i]);
// }
// return curentlcm;
// }
int lcmof2numbers(int a,int b){

    return (a*b)/gcd(a,b);

}
int lcmofarray(vector<int>&arr){
int curentlcm=arr[0];
for(int i=1;i<arr.size();i++){
    curentlcm=lcmof2numbers(curentlcm,arr[i]);
}
return curentlcm;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcmofarray(arr);
}