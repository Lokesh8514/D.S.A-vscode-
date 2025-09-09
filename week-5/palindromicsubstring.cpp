#include<bits/stdc++.h>
using namespace std;
bool validPalindrome(string ans) {
    int i=0;
    int j=ans.length()-1;
    while(i<=j){
        if(ans[i]==ans[j]){
            i++;
            j--;
        }
        else return false;
        
}
return true;
}
int main() {
    string s="bababab";
    int count=0;
    int ans =0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            string str=(s.substr(i,j-i+1));

            
            if(validPalindrome( str)){
                count++;
               if(ans<str.length())
               ans=str.length();
                //cout<<str<<endl;
            }
            

            //cout<<s.substr(i,j-i+1)<<endl;
        }
    }
    cout<<count<<" "<<ans;
    return 0;
}