#include <bits/stdc++.h>
using namespace std;

//Given two integers x and y, find their greatest common divisor.

int gcd(int x, int y){
    if(x == 0) return y;
    y %= x;
    swap(x, y);
    return gcd(x, y);
}


// int gcd(int x, int y){
//     while(x > 0){
//         y %= x;
//         swap(x, y);
//     }
//     return y;
// }

int main(){
    int x, y;
    cin >> x >> y;

    cout << gcd(x, y);
    return 0;
}