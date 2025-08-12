#include<bits/stdc++.h>
using namespace std;
void solve(string & s,int i,int j){
    if(i>j)
    return ;
    swap(s[i],s[j]);
    return solve(s,i+1,j-1); 
}
int main(){
    string s="lokesh";
    solve(s,0,s.length()-1);
    cout<<s;
}