#include <iostream>
#include<vector>

using namespace std;
int missingNumber(vector<int>& nums) {
    int res = nums.size();
   
   for (int i = 0; i < nums.size(); i++) {
       res += i - nums[i];
   }
   
   return res; 
//  sort(arr.begin(),arr.end());
//  int n=arr.size();
//  int i=0;
//  int ans=1;
//  if(n=1){
//      ans=2;
//  }
//  while(i+1==arr[i]){
//      i++;
//      if(i+1!=arr[i])
//      break;
//      ans=i+2;
//  }
// //  for(int i=0;i<arr.size();i++ ){
// //      if(i+1!=arr[i])
// //      ans=i+1;
// //      break;
// //  }
//return ans;
}
int main(){
    vector<int> nums{1,2,3,5};
    int ans=missingNumber(nums);
    cout<<ans;
}