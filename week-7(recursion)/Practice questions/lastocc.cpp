#include<bits/stdc++.h>
using namespace std;
int lastocc(string &str,char ch,int i){
    if(i<0) return -1;
    if(str[i]==ch){
        return i;
    }
    if(i<0) return -1;
    return lastocc(str,ch,i-1);
}
void lastocc(string &str,char ch,int i,int &ans){
    if(i>=str.size()) return;
    if(str[i]==ch){
        ans=i;
    }
    lastocc(str,ch,i+1,ans);
}

int main {
    string str="abcd";
    char ch='d';
    //int i=0;
    //int ans=-1;
    cout<<lastocc(str,ch,str.length()-1);
    return 0;
}