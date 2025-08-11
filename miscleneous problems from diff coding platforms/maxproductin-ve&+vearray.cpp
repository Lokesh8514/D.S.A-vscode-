#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>&arr,int n,int pos1,int pos2,int neg1,int neg2){
        for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]>pos1){
                pos2=pos1;
                pos1=arr[i];
            }
            else if(arr[i]>pos2){
                pos2=arr[i];
            }

        }
        else{
            if(arr[i]<neg1){
                neg2=neg1;
                neg1=arr[i];
            }
            else if(arr[i]<neg2){
                neg2=arr[i];
            }
        }
    }
    return max(pos1*pos2,neg1*neg2);
}
int main(){
    vector<int>arr{-10,-3,5,7,-2};
    int n=arr.size();
    // int pos1=INT_MIN;
    // int pos2=INT_MIN;
    // int neg1=INT_MAX;
    // int neg2=INT_MAX;
    cout<<maxproduct(arr,n,INT_MIN,INT_MIN,INT_MAX,INT_MAX);
    return 0;


}