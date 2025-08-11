#include <bits/stdc++.h>
using namespace std;

void display(int n,vector<vector<char>>&mat){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<mat[i][j];
    }
    cout<<endl;
  }
}
bool issafe(int row,int col,vector<vector<char>>&mat,int n){
  for(int i=row-1;i>=0;i--){
    if(mat[i][col]=='Q')
    return false;
  }
  for(int i=row, j=col;i>=0 && j>=0;i--,j--){
    if(mat[i][j]=='Q')
    return false;
  }
  for(int i=row, j=col;i>=0 && j<n;i--,j++){
    if(mat[i][j]=='Q')
    return false;
  }
  return true;
}
void solve(int row,vector<vector<char>> &mat,int n){
  if(row==n){
    display(n,mat);
    return ;
  }
  else{
    for(int col=0;col<n;col++){
      if(issafe(row,col,mat,n)){
        mat[row][col]='Q';
        solve(row+1,mat,n);
        mat[row][col]='.';
      }
    }
  }
}


int main() 
{
  int n;
  cin>>n;
vector<vector<char>> mat(n, vector<char>(n, '.')); 
  solve(0,mat,n);
    return 0;
}

