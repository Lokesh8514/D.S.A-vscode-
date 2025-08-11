#include <iostream>
#include<string>
using namespace std;
bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return false;
            
    }
    return true;
}
    
int main() {
    string s="aaa";
    //cout<<validPalindrome(s);

   if(validPalindrome(s)){
    cout<<"true";
    
   }
   else cout<<"false";
//    else {
//     for(int i=0;i<s.length();i++){
//     string ans=s;
//     ans.erase(i,1);
//     validPalindrome(ans);
//    }
//    }
    return 0;
}