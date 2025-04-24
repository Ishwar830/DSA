#include <iostream>
using namespace std;

// Sum of first N numbers using recursion

int get_sum(int n){
    if(n <= 0) return 0;
    return n + get_sum(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << get_sum(n);
    return 0;
}