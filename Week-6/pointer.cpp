#include<iostream>
#include<vector>
using namespace std;
// void util(int **ptr){
//      *ptr=*ptr+1;
//      cout<<"inside util fucntion"<<endl;
//      cout<<ptr<<endl;
// }
int *solve(){
    int a=5;
    int *ans=&a;
    return ans;
}
int main(){
    char *ptr;
//   char s[]="abcdefg";
//     ptr=s;
    //ptr+=5;
    char*ptr2=ptr+3;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    cout<<ptr2-ptr<<endl;
    // int a=5;
    // int *p=&a;
    // int **q=&p;
    // cout<<p;
    // cout<<solve();
    
//     cout<<a<<endl;;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
//    // util(q);
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<*q<<endl;
    // cout<<"before"<<endl;
    // cout<<a<<endl;;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // util(p);
    // cout<<endl<<"after"<<endl;
    // cout<<a<<endl;;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
  
}