#include <iostream>
using namespace std;

    
        string isPalindrome(string s) {  
            // for(int i=0;i<s.size();i++){
            //     if(isalpha(s[i])!=1)
            //     s.erase(i,1);
            // }
            // int i=0,j=s.length()-1;
    for(int i=0;i<s.size();i++){
        if(s[i]>'a')
        s[i]=s[i]+'a'-'A';
    }
        
        //     while(i<=j){
        //         if(s[i]==s[j]){
        //         i++;
        //             j--;}
        //         else if(s[i]!=s[j])
        //         return false;
        //     }
        //     return true;
            
        // }
        return s;
    };
    int main{
        string s ="raceacar"
        cout<< isPalindrome(s);
return 0;
    }

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };


// void preorder(Node* root) {
//     if (root == nullptr) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }


// int main() {
    
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder: ";
//     preorder(root); 

//     return 0;
// }
