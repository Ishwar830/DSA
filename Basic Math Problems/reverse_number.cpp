#include <bits/stdc++.h>
using namespace std;

// Given an integer N return the reverse of the given number.

int main(){
    int N;
    cin >> N;

    int rev_num = 0;

    while(N != 0){
        int digit = N % 10;
        N /= 10;
        rev_num = rev_num * 10 + digit;
    }

    cout << rev_num << endl;

    return 0;
}