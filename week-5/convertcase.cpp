
//Enhance your coding skills, start writing your code here!!
#include <bits/stdc++.h> 
using namespace std;
int main(){
  int hash[26]={0};
  string str;
  cin>>str;
//   for(int i=0;i<str.length();i++){
//     hash[str[i]-'a']++;
//   }
//   for(int i=0;i<26;i++){
//     if(hash[i]!=0)
//     cout<<hash[i]+'a'<<" ";
//   }
sort(str.begin(),str.end());
// cout<<str[0]-'a';
// cout<<8+'b';
for(int i=0;i<str.length();i++){
    if(str[i]!=str[i+1])
cout<<str[i]<<" ";
}

  return 0;
}// #include <iostream>
// #include<string.h>
// using namespace std;
// void convertcase(char ch[]){
// int n=strlen(ch);
// /*from lower case to uppper*/
// // for(int i=0;i<n;i++){
// //     ch[i]=ch[i]-'a'+'A';
// // }
// int i=0;
// while (ch[i]) {
//     // c=str[i];
//     if (isupper(ch[i]))
//         ch[i] = tolower(ch[i]);
//     putchar(ch[i]);
//     i++;
// }
// /*from upper case to lower*/
// // for(int i=0;i<n;i++){
// //     ch[i]=ch[i]-'A'+'a';
// // }

// }
// int main(){
//     char ch[100];
//     //cin.getline(ch,50);
//     cin>>ch;
//     convertcase(ch);
//     cout<<ch;
  
//         return 0;
// }