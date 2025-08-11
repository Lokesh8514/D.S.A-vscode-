#include <iostream>
#include<string>
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
    string s="BababaB";
    int count=0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            string ans=s.substr(i,j-i+1);

            
            if(validPalindrome( ans))
            count++;

            //cout<<s.substr(i,j-i+1)<<endl;
        }
    }
    cout<<count;
    return 0;
}