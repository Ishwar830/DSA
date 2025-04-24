#include <iostream>
using namespace std;

// Check if string is palindrome using Recursion

bool chk_palindrome(string &str, int len, int ptr){
    if(ptr >= len/2) return true;
    if(str[ptr] != str[len-1-ptr]) return false;
    chk_palindrome(str, len, ptr + 1);
    return true;
}

int main(){
    string str;
    cin >> str;
    
    cout << chk_palindrome(str, str.size(), 0);
    return 0;
}