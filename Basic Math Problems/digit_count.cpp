#include <iostream>
using namespace std;

// Given an integer N, return the no. of digits in N

int main(){
    int n;
    cin >> n;

    int digit_count = 0;
    while(n != 0){
        n /= 10;
        digit_count++;
    }

    //Min digit count is 1 incase n = 0
    cout << max(digit_count, 1) << '\n';

    // Another method
    // digit_count = (int)(log10(n) + 1);

    return 0;
}