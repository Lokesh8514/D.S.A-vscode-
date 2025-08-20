#include<bits/stdc++.h>
using namespace std;
#include<iostream>
 using namespace std;
 void maxreplace(int size, vector<int>&arr)
 {
    //int  i;
    int max = arr[0];
    if(size>0)
    {
        
        for(int i=0;i<size;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        arr[i]=max;
        cout<<arr[i]<<" ";
    }
 }

int main(){
    vector<int>arr{1,2,3,4,5,6};
    maxreplace(arr.size(),arr);
    return 0;
}