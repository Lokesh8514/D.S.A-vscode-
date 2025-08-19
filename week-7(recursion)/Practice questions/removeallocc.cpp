#include<bits/stdc++.h>
using namespace std;
void removelastocc(string&str1,string&str2,int l){
    if(str1.find(str2) ==string::npos)
    return;
    int a=str1.find(str2);
   
    str1.erase(a,l);
    removelastocc(str1,str2,l);

}
int main(){
    string str1="axxxxyyyyb";
    string str2="xy";
    removelastocc(str1,str2,str2.length());
    cout<<str1;
    return 0;
}