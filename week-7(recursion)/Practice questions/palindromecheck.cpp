#include <bits/stdc++.h>
using namespace std;

bool pal(string &str, int i, int j) {
    if (i >= j) return true;             // Base case: crossed or single char
    if (str[i] != str[j]) return false;  // Mismatch found
    return pal(str, i + 1, j - 1);       // ✅ Return recursive result
}

int main() {
    string str = "abab";
    if(pal(str, 0, str.length() - 1))
    cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}
