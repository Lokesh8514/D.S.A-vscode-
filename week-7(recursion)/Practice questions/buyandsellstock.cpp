#include<bits/stdc++.h>
using namespace std;
int buysellstocks(vector<int>arr){
    int minprice=INT_MAX;
    int maxprofit=INT_MIN;
    for(int i=0;i<arr.size();i++){
        minprice=min(minprice,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minprice);
        }
        return maxprofit;

}
void buysellstocks(vector<int>&arr,int &minprice,int &maxprofit,int i){
    if(i>=arr.size()) return;
        minprice=min(minprice,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minprice);
        buysellstocks(arr,minprice,maxprofit,i+1);
}
int main(){
    vector<int> arr{7,1,5,3,6,4};
    //cout<<buysellstocks(arr);
    int minprice=INT_MAX;
    int maxprofit=INT_MIN;
    int i=0;
    buysellstocks(arr,minprice,maxprofit,i);
    cout<<maxprofit;
}