#include<bits/stdc++.h>
using namespace std;
int main(){
   string word="abbc";
   cout<<word<<endl;
  char a=word[0];
  cout<<++a<<endl;
  cout<<word<<endl;
  // cout<<word<<endl;
//    char a=word[0];
//    cout<<++a<<endl;
   //char b='A';
//    cout<<++b;
  // cout<<word+b;
   return 0;
}
// int sum(int k){
//     int SUM=0;
//     while(k!=0){
//         SUM+=k%10;
//         k=k/10;
//     }
//     return SUM;
// }
//     int digits(int n){
//         if(n<10) return 1;
//         int ndigits=0;
//         while(n>0){
//             n=n/10;
//             ndigits++;
//         }
//         return ndigits;
//     }
//         int countSymmetricIntegers(int low, int high) {
//             int count=0;
//             for(int i=low;i<=high;i++){
//                 if(digits(i)%2==0){
//                     int x=digits(i)/2;
//                     int d=pow(10,x);
//                     int a=i/d;
//                     int b=i%d;
//                     if(sum(a)==sum(b))
//                     count++;
    
//                 }
//             }
//             return count;
//         }
// int main(){
//     int low;
//     cin>>low;
//     int high;
//     cin>>high;
//     cout<<countSymmetricIntegers(low,high) ;
//     return 0;

// }

// int main() {
//     vector<int> arr = {1, 2, 2, 3, 4, 1, 5, 6, 4};

//     unordered_map<int, int> freq;

//     // Count frequency of each element
//     for (int i=0;i<arr.size();i++) {
//         freq[arr[i]]++;
//     }

//     cout << "Unique elements are: ";
//     for (const auto& pair : freq) {
//         if (pair.second == 1) {
//             cout << pair.first << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
// bool  isprime(int n){
//     if(n<2) return false;
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//         return false;
//     }
//     return true;
//     //else if(n==2) return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(isprime(arr[i])){
//             cout<<arr[i]<<"is prime"<<endl;
//         }
//         else 
//       cout<<arr[i]<<"is not  prime"<<endl;
//     }
//     return 0;
// }