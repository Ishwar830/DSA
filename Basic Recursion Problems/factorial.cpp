#include <iostream>
using namespace std;

// Factorial using recursion

int get_factorial(int n){
    if(n == 0) return 1;
    return n * get_factorial(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << get_factorial(n);
    return 0;
}