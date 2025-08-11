#include<bits/stdc++.h>
using namespace std;
// int lastocc(string &str,char ch,int i){
//     if(i<0) return -1;
//     if(str[i]==ch){
//         return i;
//     }
//     if(i<0) return -1;
//     return lastocc(str,ch,i-1);
// }
// void lastocc(string &str,char ch,int i,int &ans){
//     if(i>=str.size()) return;
//     if(str[i]==ch){
//         ans=i;
//     }
//     lastocc(str,ch,i+1,ans);
// }
// void reversestr(string &str,int i,int j){
//     if(i>j) return;
//     swap(str[i],str[j]);
//     reversestr(str,i+1,j-1);

// }
// bool pal(string &str,int i,int j){
//     if(i>j) return true;
//     if(str[i]!=str[j])
//     return false;
//     pal(str,i+1,j-1);
//     //return true;


// }
// void removelastocc(string&str1,string&str2,int l){
//     if(str1.find(str2) ==string::npos)
//     return;
//     int a=str1.find(str2); 
   
//     str1.erase(a,l);
//     removelastocc(str1,str2,l);

// }
// void printsubarrays_util(vector<int>&arr,int &n,int s,int j){
//     if(j>n) return ;
//     for( int i=s;i<j;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     printsubarrays_util(arr,n,s,j+1);
// }
// void printsubarrays(vector<int>&arr){
//     int n=arr.size();
    
//     for(int s=0;s<n;s++){
//         int j=s;
// printsubarrays_util(arr,n,s,j);
// }
// }
// int buysellstocks(vector<int>arr){
//     int minprice=INT_MAX;
//     int maxprofit=INT_MIN;
//     for(int i=0;i<arr.size();i++){
//         minprice=min(minprice,arr[i]);
//         maxprofit=max(maxprofit,arr[i]-minprice);
//         }
//         return maxprofit;

// }
// void buysellstocks(vector<int>&arr,int &minprice,int &maxprofit,int i){
//     if(i>=arr.size()) return;
//         minprice=min(minprice,arr[i]);
//         maxprofit=max(maxprofit,arr[i]-minprice);
//         buysellstocks(arr,minprice,maxprofit,i+1);
// }
// int main(){
//     string str="abcd";
//     char ch='d';
//     //int i=0;
//     //int ans=-1;
//     cout<<lastocc(str,ch,str.length()-1);
    //cout<<ans;
    // string str;
    // cin>>str;
    // int i=0;
    // int j=str.size()-1;
    //reversestr(str,i,j);
    // cout<<str;
    // string str;
    // cin>>str;
    // int i=0;
    // int j=str.size()-1;
    // if(pal) 
    // cout<<"palindrome"<<endl;
    // else
    // cout<<"not palindrome"<<endl;
    // string str1="axxxxyyyyb";
    // string str2="xy";
    // int l=str2.length();
    // removelastocc(str1,str2,l);
    // cout<<str1;
    // vector<int>arr{1,2,3,4,5};
    // printsubarrays(arr);
    // vector<int> arr{7,1,5,3,6,4};
    // //cout<<buysellstocks(arr);
    // int minprice=INT_MAX;
    // int maxprofit=INT_MIN;
    // int i=0;
    // buysellstocks(arr,minprice,maxprofit,i);
    // cout<<maxprofit;
    return 0;
}