#include <bits/stdc++.h>
using namespace std;

// Given an integer N, return all divisors of N.

int main(){
    int n;
    cin >> n;

    for(int i = 1; i*i <= n; ++i){
        if(n % i == 0){
            cout << i << " ";
            if(n/i != i) cout << n/i << " ";
        }
    }

    return 0;
}