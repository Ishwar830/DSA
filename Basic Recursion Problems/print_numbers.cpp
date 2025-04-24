#include <iostream>
using namespace std;

// Print 1 to N
void print1toN(int n){
    if(n == 0) return;
    print1toN(n-1);
    cout << n << " ";
}

// Print N to 1
void printNto1(int n){
    if(n == 0) return;
    cout << n << " ";
    printNto1(n-1);
}

int main(){
    int n;
    cin >> n;

    print1toN(n);
    cout << endl;
    printNto1(n);
    return 0;
}